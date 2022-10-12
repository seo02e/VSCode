#include <iostream>
#include <random>
#include <ctime>
#include "randint.h"

using namespace std;
mt19937 gen(time(nullptr)); //mt19937 gen(clock()); //�ð��� �̿��� ���� ���� ���� �ʱ�ȭ
uniform_int_distribution<int> int_rd(int low, int high); //low~high ������ ���� ���� ����(int)
cin >> rannum<< int_rd(gen) << endl; //���� ������ �����Ͽ� ���� �� ������ ���� ���
RandInt::RandInt(int low, int high, string cn): low(low), high(high), objname(cn){

}
RandInt::~RandInt(){
    cout << objname<< "��ü �Ҹ�"<<endl;
}
void RandInt::print() const{
    cout << "Random number between "<<low<<" and "<<high<<' : '<< rannum<<endl;
}
