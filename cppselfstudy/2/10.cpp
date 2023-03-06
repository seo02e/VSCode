#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

auto sum(double a, double b,double c){
    double sum=a+b+c;
    return sum;
}
auto average(double num){
    double aver = num/3;
    return aver;
}
int main(){
    double quiz, midterm,finals; 
    cout << "퀴즈, 중간고사, 기말고사 성적을 입력하세요 :";
    cin >> quiz >>midterm>>finals;
    double total = sum(quiz, midterm,finals);
    double aver = average(total);
    cout << "total : "<< fixed << setprecision(1)<<total <<endl;
    cout << "average : "<< fixed << setprecision(2)<<aver;
    return 0;
}