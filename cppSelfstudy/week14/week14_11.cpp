#include <iostream>
using namespace std;
//��, ������ ����Ʈ�� ANDGate, ORGate, XORGate Ŭ������ �ۼ��ϸ� AbstractGate�� ��ӹ޴´�. 
//�������� �����Ѵ�. 
//���� ��� �� ��� �� : cout << boolalpha << true;

class AbstractGate {//�߻� Ŭ����
public:
virtual bool operation(bool x, bool y, bool z) = 0;// ���� ���� �Լ�
};
//
//�ʿ��� �Լ��� Ŭ���� �ۼ�
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
        cout << "\n���� ������ �����ϼ��� 1.and, 2.or 3.xor 4.stop>> ";
        cin >> choice;
        if (choice == 4) break;
        //
        //�ʿ��� ���� ���� �ۼ�
        //
    }
}

int main(){
    Manage::run();
}