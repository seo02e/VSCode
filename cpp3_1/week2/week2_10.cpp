#include <iostream>
using namespace std;
int main(){
    double quiz, mid, test;
    cout << "����, �߰����, �⸻��� ������ �Է��ϼ��� :";
    cin >> quiz >> mid >> test;
    double total = quiz+ mid +test;
    cout << "total : "<< total<< endl;
    double average = total/3;
    cout << "average : "<< average <<endl;

}