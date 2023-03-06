#include <iostream>

using namespace std;
enum class TestEnum{Rack=1, Paper, Scissors};
int main(){
    do{
        cout << "정수 입력(1,2,3이 아닌 수는 프로그램 종료) :";
        int you;
        cin >> you;
        if(you<=0||you>=4){
            break;
        }
        switch(you){
            case static_cast<int>(TestEnum::Rack):cout << "Rack"<<endl; break;
            case static_cast<int>(TestEnum::Paper):cout << "Paper"<<endl; break;
            case static_cast<int>(TestEnum::Scissors):cout << "Scissors"<<endl; break;
        }
    }while(1);
    
}