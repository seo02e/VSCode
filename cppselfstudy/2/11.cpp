#include <iostream>

using namespace std;

int main(){
    cout << "10���� �Է� : ";
    int num;
    cin >> num;
    cout <<"���� �������� ����ϱ� oct(8), hex(16), digit(10)"<<endl;
    while(1){
        cout<<"�ش� ���� �Է� : ";
        string yours;
        cin >> yours;
        if (yours =="8" || yours =="oct"){
            cout << "=> 8���� : 0"<< oct <<num<<endl;
        }
        else if (yours =="16" || yours =="hex"){
            cout << "=> 16���� : 0x"<< hex <<num<<endl;
        }
        else if (yours =="10" || yours =="digit"){
            cout << "=> 10���� : " << (int)num <<endl;
        }
        else{
            cout << "�ش� ������ �����ϴ�. "<<endl;
            break;
        }
    }
}