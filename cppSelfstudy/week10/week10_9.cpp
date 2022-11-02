#include <iostream>
#include <string>
using namespace std;

void message_print(string&& msg){
    cout << "message =" << msg << endl;
}

int main(){
    string stra ="apple";
    string strb ="banana";
    message_print(move(stra));
    message_print(stra+strb);
    return 0;
}