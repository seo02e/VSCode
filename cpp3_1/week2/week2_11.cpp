#include <iostream>
using namespace std;
int main(){
    cout << "10진수 입력 : ";
    int answer;
    cin >> answer;
    cout <<"여러 진법으로 출력하기 oct(8), hex(16), digit(910)"<< endl;
    while(1){
        cout<<"해당 진법 입력 : ";
        string yours;
        cin >> yours;
        if (yours =="8" || yours =="oct"){
            cout << "=> 8진법 : 0"<< oct <<answer<<endl;
        }
        else if (yours =="16" || yours =="hex"){
            cout << "=> 16진법 : 0x"<< hex <<answer<<endl;
        }
        else if (yours =="10" || yours =="digit"){
            cout << "=> 10진법 : " << (int)answer <<endl;
        }
        else{
            cout << "해당 진법이 없습니다. "<<endl;
            break;
        }
    }
}