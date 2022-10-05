#pragma once
#include <string>
using namespace std;

namespace Bank{
    class Account{
        string Owner;
        int money;
    public:
        Account();//디폴트 생성자
        Account(string name, int don); //매개변수 생성자

        int deposit(int mo); //입금 메소드
        int withdraw(int mo); //출금 메소드

        int check(); //private인 money에 접근하여 리턴
        string getOwner(); //private인 owner 접근하여 리턴

        ~Account();
    };
    enum class MENU{
        QUIT=4, DEPOSIT=1, WITHDRAW=2, CHECK=3
    };
}

