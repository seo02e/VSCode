#include <iostream>
using namespace std;
int add(int a[], int n, int b[] =nullptr){
    int s=0;
    for(int i=0; i<n; i++) s+= a[i];
    if(b!=nullptr)
        for(int i=0; i<n; i++) s+= b[i];
    return s;
}
int main() {
 int a[] = {1, 2, 3, 4, 5};
 int b[] = {6, 7, 8, 9, 10};
 int c = add(a, sizeof(a)/sizeof(int)); //�迭 a�� ������ size �ε������� ��� ���� �� ����
 int d = add(a, sizeof(a)/sizeof(int), b); //�迭 a, b�� ������ size �ε������� ��� ���� �� ���� cout << c << endl; // 15 ���
 cout << d << endl; // 55 ���
}