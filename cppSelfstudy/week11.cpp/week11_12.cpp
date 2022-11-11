#include <iostream>
using namespace std;

class ArrayUtil {
public:
 //s1과 s2를 연결한 새로운 배열을 동적 생성하여 리턴
 static int* concat(int s1[], int size1, int s2[], int size2, int&retSize);
 //s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
 static int* remove(int s1[], int size1, int s2[], int size2, int&retSize);
};
//concat() 구현합니다.---------------------------------------------------------------------------------------------
int* ArrayUtil::concat(int s1[], int size1, int s2[], int size2, int&retSize){
    
}
//remove() 구현합니다.--------------------------------------------------------------------------------------------
int* ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int&retSize){
    
}

/*

0. 입력받은 배열을 동적 할당한다.
1. size_1만큼 새로운 temp 동적할당
2. 같지않은 것만 temp에 넣는다,
3. 넣으면서 resize증가시킨다.
4. 다 찾았으면  retsize 만큼 동적할당
retemp 만든다
5.retsize만큼 retemp에다가  retemp를 넣는다.
나머지는 사진으로....

*/
int main() {
 int xcount = 0, ycount = 0;
 int *x, *y;
 //x배열의 원소의 개수(1~5)를 입력 받는다. /입력 받은 수만큼 x배열을 동적 생성한다. /정수를 입력 받아 x배열에 저장한다.
 
 //y배열의 원소의 개수(1~5)를 입력 받는다. /입력 받은 수만큼 y배열을 동적 생성한다. /정수를 입력 받아 y배열에 저장한다.
 
 
 int retsize = 0;
 //concat() 함수를 호출한다.---------------------------------------------------------


 cout << "\nx배열과 y배열을 연결한 배열은 ";
 for (int i = 0; i < retsize; i++) cout << conarr[i] << ' ';
 cout << endl;
 //remove() 함수를 호출한다.---------------------------------------------------------



 cout << "\nx배열에서 y배열의 원소를 삭제한 결과, x배열의 개수는 " << retsize << "개, ";
 for (int i = 0; i < retsize; i++) cout << remarr[i] << ' ';
 cout << endl;
 //동적 할당된 모든 변수를 해제 한다.---------------------------------------------------


 }