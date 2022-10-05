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
int Account::deposit(int mo){
    money += mo;
    return money;
}
int Account::withdraw(int mo){
    if(money >= mo){
        money -= mo;
        return money;
    }
    else{
        cout << "ÀÜ¾×ÀÌ ºÎÁ·ÇÕ´Ï´Ù." << endl;
        return 0;
    }
}

int Account::check(){ return money; }

string Account::getOwner(){  return Owner;  }

Account::~Account(){
    cout << Owner<<": °´Ã¼ ¼Ò¸ê"<< endl;
}


