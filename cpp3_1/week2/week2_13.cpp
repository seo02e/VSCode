#include <iostream>
using namespace std;
int main(){
    cout << "실수를 입력하세요 : ";
    double num;
    cin >> num;
    cout <<endl<< "정수 part : "<< (int)num<<endl;
    cout << "소수 part : "<< num-(int)num <<endl;
}