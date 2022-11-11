#include <iostream>
#include <string.h>
using namespace std;

class Person {
 string name;
public:
 Person() = default;
 Person(string n) : name {n} { cout << "������ ����" << endl; };
 Person(const Person &person); //���� ������
 Person(Person&& p); //�̵� ������
 ~Person() { cout << "�Ҹ��� ����" << endl; };
 void show(string obj) { cout << obj << " name = "<< name << endl; }
};

Person::Person(const Person &per): name(per.name){
    cout<< "���� ������ ����" << endl;
}

Person::Person(Person &&p){
    cout << "�̵� ������ ȣ��" << endl;
    this->name = p.name;
    p.name.clear();
}


int main() {
    cout << "-1----------" << endl;
    Person dan("daniel");
    Person ben = Person("benny");
    cout << "-2----------" << endl;
    Person mvdan = move(dan);

    cout << "-3----------" << endl;
    Person cpben = ben;
    Person cpmvdan(mvdan);
    cout << "-4----------" << endl;
    dan.show("dan");
    ben.show("ben");
    mvdan.show("mvdan");
    cpben.show("cpben");
    cpmvdan.show("cpmvdan");
    return 0;
}