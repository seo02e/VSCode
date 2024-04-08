#include <iostream>
using namespace std;

int main(){
    string str = "This is a long string.";
    char p = str.find("is"); 
    cout << *p << endl;
    cout << p << endl;
}