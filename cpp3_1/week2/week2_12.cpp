#include <iostream>
using namespace std;
enum class TestEnum{Rack=1,Paper=2,Scissors=3};
int main(){
    cout << "20215135 ���ؼ�"<<endl;
    do{
        cout << "���� �Է�(1,2,3�� �ƴ� ���� ���α׷� ����) :";
        int answer;
        cin >> answer;
        if(answer<=0||answer>=4){
            break;
        }
        switch(answer){
            case static_cast<int>(TestEnum::Rack):cout << "Rack"<<endl; break;
            case static_cast<int>(TestEnum::Paper):cout << "Paper"<<endl; break;
            case static_cast<int>(TestEnum::Scissors):cout << "Scissors"<<endl; break;
        }
    }while(true);
    
}