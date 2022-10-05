#pragma once
#include <string>
using namespace std;

namespace Bank{
    class Account{
        string Owner;
        int money;
    public:
        Account();//����Ʈ ������
        Account(string name, int don); //�Ű����� ������

        int deposit(int mo); //�Ա� �޼ҵ�
        int withdraw(int mo); //��� �޼ҵ�

        int check(); //private�� money�� �����Ͽ� ����
        string getOwner(); //private�� owner �����Ͽ� ����

        ~Account();
    };
    enum class MENU{
        QUIT=4, DEPOSIT=1, WITHDRAW=2, CHECK=3
    };
}

