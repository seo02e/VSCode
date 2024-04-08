#include <iostream>
using namespace std;

int main(){
    string str1 = "The time has come.";
    const char* str2 = "Are your ready?";
    str1.append(str2);
    cout << str1 << endl;  
}