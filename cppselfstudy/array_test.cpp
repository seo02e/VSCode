#include <iostream>
#include <array> //array Ŭ����
#include <algorithm> //sort() �Լ�
using namespace std;
int main()
{
array<int, 5> farr{3, 6, 11, 5, 7}; //�ڷ����� ũ�⸦ �ݵ�� ����ؾ� ��
array<int, 6> sarr;
sarr = {12, 4, 31, 46, 23, 9};
cout << "farr size = " << farr.size() << endl; //size()�Լ� : �迭 ũ��
cout << "farr.at(2) = " << farr.at(2) << ", farr[2] = " << farr[2] << endl; //at()�Լ��� ��ȿ ���� �˻�, []���� ������
cout << "farr ù��° ���� = " << farr.front() << ", farr ������ ���� = " << farr.back() << endl;
cout << "farr �迭 ���� = " << boolalpha << farr.empty() << endl; //empty() : ��迭 true, ���Ұ� ������ false
cout << "sarr sort = ";
sort(sarr.begin(), sarr.end()); //�ݺ��ڿ� sort()�Լ��� ��� �迭 ���� ����
for (auto value : sarr)
cout << value << " ";
}