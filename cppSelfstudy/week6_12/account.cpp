#include <iostream>
#include <string>
#include "account.h"
using namespace std;
using Bank::Account;
using Bank::MENU;
Account::Account(){
}

Account::Account(string name, int don): Owner(name), money(don){
}
void Account::deposit(int mo){
    money += mo;
}
int Account::withdraw(int mo){
    if(money >= mo){
        money -= mo;
        return mo;
    }
    else{
        cout << "�ܾ��� �����մϴ�." << endl;
        return 0;
    }
}
int Account::check(){ return money; }
string Account::getOwner(){  return Owner;  }
Account::~Account(){
    cout << Owner<<": ��ü �Ҹ�"<< endl;
}


