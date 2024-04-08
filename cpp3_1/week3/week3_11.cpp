#include <iostream>
using namespace std;
//find2replace() 함수를 구현합니다. //
void find2replace(string &str, string &has, string &replace, bool &result){
    int num =0;
    while ((num=str.find(has)) != -1){ //입력받은 문자열에서 찾아서 바꾸고자하는 문자의 위치를 i로 초기화, find에서 없을 경우 -1
        str.replace(num, replace.length(), replace);// 그 위치의 문자를 바꾸고 싶은 문자로 변경
        result =true; //찾아서 발견후 변경까지 했을경우 변경기록을 bool타입으로 남기기 
        //이후 출력을 위해 설정
    }
}
//find2replace() 함수를 구현합니다. //
int main() {
    string str = "C++ programming";
    string has = "+";
    string replace = "p";
    bool result = false;
    cout << "20215135 김준서" << endl;
    cout << "변경 전 문자열 = " << str << endl;
    find2replace(str, has, replace, result);

    if (result == true)
        cout << "변경 후 문자열 = " << str << endl;
    else
        cout << str << "에서 " << has << "를 발견하지 못함." << endl;
    return 0;
}