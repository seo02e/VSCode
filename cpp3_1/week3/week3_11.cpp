#include <iostream>
using namespace std;
//find2replace() �Լ��� �����մϴ�. //
void find2replace(string &str, string &has, string &replace, bool &result){
    int num =0;
    while ((num=str.find(has)) != -1){ //�Է¹��� ���ڿ����� ã�Ƽ� �ٲٰ����ϴ� ������ ��ġ�� i�� �ʱ�ȭ, find���� ���� ��� -1
        str.replace(num, replace.length(), replace);// �� ��ġ�� ���ڸ� �ٲٰ� ���� ���ڷ� ����
        result =true; //ã�Ƽ� �߰��� ������� ������� �������� boolŸ������ ����� 
        //���� ����� ���� ����
    }
}
//find2replace() �Լ��� �����մϴ�. //
int main() {
    string str = "C++ programming";
    string has = "+";
    string replace = "p";
    bool result = false;
    cout << "20215135 ���ؼ�" << endl;
    cout << "���� �� ���ڿ� = " << str << endl;
    find2replace(str, has, replace, result);

    if (result == true)
        cout << "���� �� ���ڿ� = " << str << endl;
    else
        cout << str << "���� " << has << "�� �߰����� ����." << endl;
    return 0;
}