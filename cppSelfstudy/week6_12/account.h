#ifndef ACCOUNT_H
#include <string>

namespace Bank{
    class Account{
        std::string Owner;
        int money;

    public:
        Account();//디폴트 생성자
        //Account() = default; 디폴트 생성자 없음
        Account(std::string name, int don); //매개변수 생성자

        void deposit(int mo); //입금 메소드
        int withdraw(int mo); //출금 메소드

        int check(); //private인 money에 접근하여 리턴
        std::string getOwner(); //private인 owner 접근하여 리턴

        ~Account();
    };
    enum class MENU{
        QUIT=4, DEPOSIT=1, WITHDRAW=2, CHECK=3
    };
}
#endif 
