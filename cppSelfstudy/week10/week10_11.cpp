#include <iostream>
#include <string.h>
using namespace std;
class Person{
    char *name;
public:
    Person() = default;
    Person(const char* name);
    Person(const Person& person);
    Person(Person &&p) ;
    ~Person();
    void show(string obj);
};
void Person::show(string obj){
    if(name==nullptr){ cout << obj <<" name = "<< " " << endl; }
    else{cout << obj <<" name = " << name << endl; }
}
Person::Person(const char* name){
    int lenght = strlen(name);
    this-> name = new char[lenght+1];
    strcpy( this-> name, name);
    cout << "������ ����" << endl;
}//������ ����
Person::~Person(){
    if(name){
        delete[] name;
    }
    cout << "�Ҹ��� ȣ��" << endl;
}//�Ҹ��� ����
Person::Person(const Person& person){
    int len = strlen(person.name);
    this->name = new char[len+1];
    strcpy(this->name, person.name);
    cout << "���� ������ ���� " << endl;
}//���� ������ ����
Person::Person(Person&& p) {
    cout << "�̵� ������ ����" << endl;
    name = p.name;
    p.name = nullptr;
}//�̵� ������ ����
int main() {
    cout << "-1---------------" << endl;
    Person dan("daniel");
    Person ben = Person("benny");
    cout << "-2---------------" << endl;
    Person mvdan = move(dan);
    cout << "-3---------------" << endl;
    Person cpben = ben;
    Person cpmvdan(mvdan);
    cout << "-4---------------" << endl;
    dan.show("dan");
    ben.show("ben");
    mvdan.show("mvdan");
    cpben.show("cpben");
    cpmvdan.show("cpmvdan");
    return 0;
}