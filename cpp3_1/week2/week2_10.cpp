#include <iostream>
using namespace std;
int main(){
    double quiz, mid, test;
    cout << "퀴즈, 중간고사, 기말고사 성적을 입력하세요 :";
    cin >> quiz >> mid >> test;
    double total = quiz+ mid +test;
    cout << "total : "<< total<< endl;
    double average = total/3;
    cout << "average : "<< average <<endl;

}