#include <iostream>
using namespace std;

class ArrayUtil {
public:
 //s1�� s2�� ������ ���ο� �迭�� ���� �����Ͽ� ����
 static int* concat(int s1[], int size1, int s2[], int size2, int&retSize);
 //s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
 static int* remove(int s1[], int size1, int s2[], int size2, int&retSize);
};
//concat() �����մϴ�.---------------------------------------------------------------------------------------------
int* ArrayUtil::concat(int s1[], int size1, int s2[], int size2, int&retSize){
    
}
//remove() �����մϴ�.--------------------------------------------------------------------------------------------
int* ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int&retSize){
    
}

/*

0. �Է¹��� �迭�� ���� �Ҵ��Ѵ�.
1. size_1��ŭ ���ο� temp �����Ҵ�
2. �������� �͸� temp�� �ִ´�,
3. �����鼭 resize������Ų��.
4. �� ã������  retsize ��ŭ �����Ҵ�
retemp �����
5.retsize��ŭ retemp���ٰ�  retemp�� �ִ´�.
�������� ��������....

*/
int main() {
 int xcount = 0, ycount = 0;
 int *x, *y;
 //x�迭�� ������ ����(1~5)�� �Է� �޴´�. /�Է� ���� ����ŭ x�迭�� ���� �����Ѵ�. /������ �Է� �޾� x�迭�� �����Ѵ�.
 
 //y�迭�� ������ ����(1~5)�� �Է� �޴´�. /�Է� ���� ����ŭ y�迭�� ���� �����Ѵ�. /������ �Է� �޾� y�迭�� �����Ѵ�.
 
 
 int retsize = 0;
 //concat() �Լ��� ȣ���Ѵ�.---------------------------------------------------------


 cout << "\nx�迭�� y�迭�� ������ �迭�� ";
 for (int i = 0; i < retsize; i++) cout << conarr[i] << ' ';
 cout << endl;
 //remove() �Լ��� ȣ���Ѵ�.---------------------------------------------------------



 cout << "\nx�迭���� y�迭�� ���Ҹ� ������ ���, x�迭�� ������ " << retsize << "��, ";
 for (int i = 0; i < retsize; i++) cout << remarr[i] << ' ';
 cout << endl;
 //���� �Ҵ�� ��� ������ ���� �Ѵ�.---------------------------------------------------


 }