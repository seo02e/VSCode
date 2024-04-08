#include <iostream>
#include <initializer_list>
using namespace std;
#define FAR 128;
char list_exam(initializer_list<char> value, char cmp) { 
    int dist=FAR;
    char u;
    for (char ch : value){
        int diff = abs(cmp-ch); //�Ÿ�
        if(dist > diff){
            dist = diff;
            u = ch;
        }
    }
    return u;
}

int main(){
    cout << "{ 'd','p','r','w','g','f'}���� �� h�� ����� ���ڴ� : ";
    cout << list_exam({'d','p','r','w','g','f'},'h')<<endl;

    cout << "{ 'k','q','b','r','a','e','v','z'}���� �� w�� ����� ���ڴ� : ";
    cout << list_exam({'k','q','b','r','a','e','v','z'},'w')<<endl;
}