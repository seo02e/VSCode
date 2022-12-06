#include <iostream>
using namespace std;

class ArrayUtil {
public:
 //s1�� s2�� ������ ���ο� �迭�� ���� �����Ͽ� ����
 static int* concat(int s1[], int size1, int s2[], int size2, int& retSize);
 //s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
 static int* remove(int s1[], int size1, int s2[], int size2, int& retSize);
};
//concat() �����մϴ�.---------------------------------------------------------------------------------------------
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

//remove() �����մϴ�.--------------------------------------------------------------------------------------------
int* ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int& retSize)
{
	retSize = 0;
    int num=0;
    //1. size_1��ŭ ���ο� temp �����Ҵ�
    int* temp = new int[size1];
    for(int i=0; i<size1; i++){
        bool check = false;
        for(int j=0; j<size2; j++){
            if(s1[i]==s2[j]){
                check = true;
            }
        }
        if(check == false){
            //2. �������� �͸� temp�� �ִ´�,
            temp[num++] = s1[i];
            //3. �����鼭 resize������Ų��.
            retSize++;
        }
    }
    //4. �� ã������  retsize ��ŭ �����Ҵ� retemp �����
    int* retTemp = new int[retSize];
    //5.retsize��ŭ rettemp���ٰ�  temp�� �ִ´�.
    for(int i=0; i<retSize; i++){
        retTemp[i] = temp[i];
    }
    //temp�� �����.
    delete[] temp;
    //retTemp�� �����Ѵ�.
    return retTemp;
}


int main() {
    cout << "20215135 ���ؼ�" << endl;
    int xcount = 0, ycount = 0;
    int *x, *y;

//x�迭�� ������ ����(1~5)�� �Է� �޴´�. /�Է� ���� ����ŭ x�迭�� ���� �����Ѵ�. /������ �Է� �޾� x�迭�� �����Ѵ�.
    cout << "x�迭�� ����(1~5)�� �� �� ? ";
    cin >> xcount;
    cout << "x�迭�� ������ ���� �Է� : ";
    x = new int[xcount];
    for(int i=0; i<xcount; i++){
        cin >> x[i];
    }

//y�迭�� ������ ����(1~5)�� �Է� �޴´�. /�Է� ���� ����ŭ y�迭�� ���� �����Ѵ�. /������ �Է� �޾� y�迭�� �����Ѵ�.
    cout << "\ny�迭�� ����(1~5)�� �� �� ? ";
    cin >> ycount;
    cout << "y�迭�� ������ ���� �Է� : ";
    y = new int[ycount];
    for(int i=0; i<ycount; i++){
        cin >> y[i];
    }

    int retsize = 0;

 //concat() �Լ��� ȣ���Ѵ�.---------------------------------------------------------
    int* conarr = ArrayUtil::concat(x, xcount, y, ycount, retsize);

    cout << "\nx�迭�� y�迭�� ������ �迭�� ";
    for (int i = 0; i < retsize; i++) cout << conarr[i] << ' ';
    cout << endl;

//remove() �Լ��� ȣ���Ѵ�.---------------------------------------------------------
    int* remarr = ArrayUtil::remove(x, xcount, y, ycount, retsize);

    cout << "\nx�迭���� y�迭�� ���Ҹ� ������ ���, x�迭�� ������ " << retsize << "��, ";
    for (int i = 0; i < retsize; i++) cout << remarr[i] << ' ';
    cout << endl;

 //���� �Ҵ�� ��� ������ ���� �Ѵ�.---------------------------------------------------
    delete[] x;
    delete[] y;
    delete[] remarr;
    delete[] conarr;
 }