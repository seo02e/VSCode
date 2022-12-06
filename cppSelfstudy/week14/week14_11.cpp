#include <iostream>
using namespace std;
//단, 각각의 게이트는 ANDGate, ORGate, XORGate 클래스로 작성하며 AbstractGate를 상속받는다. 
//다형성을 적용한다. 
//논리형 상수 값 출력 시 : cout << boolalpha << true;

class AbstractGate {//추상 클래스
public:
virtual bool operation(bool x, bool y, bool z) = 0;// 순수 가상 함수
};
//
//필요한 함수와 클래스 작성
//
class Manage {
    public:
    static void run();
};
void Manage::run() {
AbstractGate *ag = nullptr;
int choice;
bool b1, b2, b3;
    while (true) {
        cout << "\n연산 종류를 선택하세요 1.and, 2.or 3.xor 4.stop>> ";
        cin >> choice;
        if (choice == 4) break;
        //
        //필요한 구현 내용 작성
        //
    }
}

int main(){
    Manage::run();
}