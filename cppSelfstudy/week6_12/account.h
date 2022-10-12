#ifndef ACCOUNT_H
#include <string>

namespace Bank{
    class Account{
        std::string Owner;
        int money;

    public:
        Account();//����Ʈ ������
        //Account() = default; ����Ʈ ������ ����
        Account(std::string name, int don); //�Ű����� ������

        void deposit(int mo); //�Ա� �޼ҵ�
        int withdraw(int mo); //��� �޼ҵ�

        int check(); //private�� money�� �����Ͽ� ����
        std::string getOwner(); //private�� owner �����Ͽ� ����

        ~Account();
    };
    enum class MENU{
        QUIT=4, DEPOSIT=1, WITHDRAW=2, CHECK=3
    };
}
#endif 
