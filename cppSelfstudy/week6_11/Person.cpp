#include <iostream>
#include <string>
using namespace std;
class Person{
    string name;
    int age;
public:
    Person();
    Person(string n, int a);
    string getName();
    int getAge();
    ~Person();
};
Person::Person(): name("Anonymous"), age(0){
    cout << "������ ���� "<< name<<','<<age<<endl;
}
Person::Person(string na, int a): name(na), age(a) {
    cout << "������ ���� "<< name<<','<<age<<endl;
}
string Person::getName(){
    return name;
}
int Person::getAge(){
    return age;
}
Person::~Person(){
    cout << "�Ҹ��� ���� " << name<< endl; 
}

int main(){
    Person baby;
    Person child("benny", 10);
    cout << "baby name = " << baby.getName() << endl;
    cout << "child name = " << child.getName() << endl;
}