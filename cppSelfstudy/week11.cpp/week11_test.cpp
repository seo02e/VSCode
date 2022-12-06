#include <iostream>
using namespace std;

class ArrayUtil {
public:
 //s1과 s2를 연결한 새로운 배열을 동적 생성하여 리턴
 static int* concat(int s1[], int size1, int s2[], int size2, int& retSize);
 //s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
 static int* remove(int s1[], int size1, int s2[], int size2, int& retSize);
};
//concat() 구현합니다.---------------------------------------------------------------------------------------------
int* ArrayUtil::concat(int s1[], int size1, int s2[], int size2, int& retSize){
    retSize = size1 + size2;
    int* conarr = new int[retSize];
    for(int i=0;  i<size1; i++){
        conarr[i] = s1[i];
    }
    for(int i=0; i<size2; i++){
        conarr[i+size1]= s2[i];
    }
    return conarr;
}

//remove() 구현합니다.--------------------------------------------------------------------------------------------
int* ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int& retSize)
{
	retSize = 0;
    int* temp = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		bool isCheck = false;
		for (int j = 0; j < size2; j++)
		{
			if (s1[i] == s2[j])
				isCheck = true;
		}
		if (isCheck == false)
            temp[retSize] = s1[i];
			retSize++;//겹치지 않는 갯수 카운트
	}
    
	int* retTemp = new int[retSize];//겹치지 않는 개수 만큼 생성
	int k = 0;
	for (int i = 0; i < size1; i++)
	{
		bool isCheck = false;
		for (int j = 0; j < size2; j++)
		{
			if (s1[i] == s2[j])
				isCheck = true;
		}
		if (isCheck == false)
			retTemp[k++] = s1[i];//겹치지 않을때만 값 저장
	}

	return retTemp;
}

/*

0. 입력받은 배열을 동적 할당한다.
1. size_1만큼 새로운 temp 동적할당
2. 같지않은 것만 temp에 넣는다,
3. 넣으면서 resize증가시킨다.
4. 다 찾았으면  retsize 만큼 동적할당
retemp 만든다
5.retsize만큼 rettemp에다가  temp를 넣는다.
나머지는 사진으로....

*/

int main() {
    int xcount = 0, ycount = 0;
    int *x, *y;

//x배열의 원소의 개수(1~5)를 입력 받는다. /입력 받은 수만큼 x배열을 동적 생성한다. /정수를 입력 받아 x배열에 저장한다.
    cout << "x배열의 원소(1~5)는 몇 개 ? ";
    cin >> xcount;
    cout << "x배열에 저장할 정수 입력 : ";
    x = new int[xcount];
    for(int i=0; i<xcount; i++){
        cin >> x[i];
    }

//y배열의 원소의 개수(1~5)를 입력 받는다. /입력 받은 수만큼 y배열을 동적 생성한다. /정수를 입력 받아 y배열에 저장한다.
    cout << "\ny배열의 원소(1~5)는 몇 개 ? ";
    cin >> ycount;
    cout << "y배열에 저장할 정수 입력 : ";
    y = new int[ycount];
    for(int i=0; i<ycount; i++){
        cin >> y[i];
    }

    int retsize = 0;

 //concat() 함수를 호출한다.---------------------------------------------------------
    int* conarr = ArrayUtil::concat(x, xcount, y, ycount, retsize);

    cout << "\nx배열과 y배열을 연결한 배열은 ";
    for (int i = 0; i < retsize; i++) cout << conarr[i] << ' ';
    cout << endl;

//remove() 함수를 호출한다.---------------------------------------------------------
    int* remarr = ArrayUtil::remove(x, xcount, y, ycount, retsize);

    cout << "\nx배열에서 y배열의 원소를 삭제한 결과, x배열의 개수는 " << retsize << "개, ";
    for (int i = 0; i < retsize; i++) cout << remarr[i] << ' ';
    cout << endl;

 //동적 할당된 모든 변수를 해제 한다.---------------------------------------------------
    delete[] x;
    delete[] y;
    delete[] remarr;
    delete[] conarr;
 }