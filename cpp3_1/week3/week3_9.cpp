#include <iostream>
#include <string>
using namespace std;
string removeChar(string str, char c); //�����ϼ���. 
string findAndReplace(string str, string olds, string news); //�����ϼ���.
string removeChar(string str, char c){
    int num =0;
    while(num = str.find(c) != -1){
        str.erase(num, 1);
    }
    return str;
}
string findAndReplace(string str, string olds, string news){
    int num =0;
    while( num = str.find(olds) != -1){
        str.erase(num, olds.length());
        str.insert(num, news);
    }
    return str;
}
int main() {
 string str;
 char c;
 cout << "���ڿ� �Է�: ";
 getline(cin, str);
 cout << "�����ϰ��� �ϴ� ���� �Է� : ";
 cin >> c;
 cout << "���� �� ���ڿ� = " << removeChar(str, c) << endl << endl;
 string str1 = "an old string";
 string str2("an old");
 string str3("a new");
 cout << str1 << "���� ";
 string strnew = findAndReplace(str1, str2, str3);
 cout << str2 << " ���ڿ��� " << str3 << "�� ��ü �� ���ڿ� = " << strnew << endl;
 return 0;
}