#include <iostream>
#include <initializer_list>
using namespace std;
#define FAR 128;
char list_exam(initializer_list<char> value, char cmp) { 
    int dist=FAR;
    char u;
    for (char ch : value){
        int diff = abs(cmp-ch); //거리
        if(dist > diff){
            dist = diff;
            u = ch;
        }
    }
    return u;
}

int main(){
    cout << "{ 'd','p','r','w','g','f'}문자 중 h와 가까운 문자는 : ";
    cout << list_exam({'d','p','r','w','g','f'},'h')<<endl;

    cout << "{ 'k','q','b','r','a','e','v','z'}문자 중 w와 가까운 문자는 : ";
    cout << list_exam({'k','q','b','r','a','e','v','z'},'w')<<endl;
}