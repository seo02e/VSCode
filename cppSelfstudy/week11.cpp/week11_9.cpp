#include <iostream>
#include <string>
using namespace std;
class Person{
    int id;
    double weight;
    string name;
public:
    Person(int id=1, string name = "Grace", double weight= 20.5){this->id=id, this->name = name, this->weight=weight;}
    void show(){ cout << id << ' '<<weight << ' ' <<name<<endl;}
};
int main(){
    Person grace, ashlet(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashlet.show();
    helen.show();
}
/* �ǽ����� Ǯ��
-------------------------------------
2��
id pass ���� �� ���� x
id.pass �Ű����� �� ���� x
pass�� �Ű����� �� ���� x 
-------------------------------------
3��
int sum(int a, int b, int c=30){
    return a+b+c;
}
cout << "sum="<<sum(2,6,4)<<endl;
cout << "sum="<<sum(3,2)<<endl;
------------------------------------
4��
double sum(double a, double b){
    return a+b+c;
}
int main(){
    cout << "sum = " << sum() << endl;
    cout << "sum = " << sum(3.4) << endl;
    cout << "sum = " << sum(3.4,6.5) << endl;
}
-------------------------------------------
5��
����Ʈ�Լ��� ���ʿ� ������ ����Ǿ�� ��.
int calc(int a, int b=5, int c=0, int d=0)
----------------------------------------------
6��
double sum(double a=0, double b=0, double c=0){
    return a+b+c;
}
int main(){
    cout << "sum = " << sum(2,6,5) << endl;
    cout << "sum = " << sum(3.5, 5.6) << endl;
    cout << "sum = " << sum(5, 12) << endl;
}
------------------------------------------
7��
#include <iostream>
using namespace sed;

void fillLine(int a, char c ='*'){
    for(int i=0; i<n; i++){
        cout << c;
    }
    cout << endl;
}
int main(){
    filldLine(); �Ű����� ���� �Լ��� ����Ϸ���
    void fillLine �� �Ű����� n�� ���� �־��ָ� �ȴ�.
    fillLine(25);
    fillLine(10, '%');
}
-----------------------------------------
8��
A. 
Test t, *p;

t.print();��ü �̸� t��� ����
Test::print();
b->print();

B.
������������ �ʱ�ȭ���� �ʱ����� inline�Լ� ���
int Test::cnt=5;//���� �������� ������ ����, �Ǵ� �ζ������� �ϱ� //�ܺ� ����, ������������ �ʱ�ȭ

C.
static int cnt -> inline static int cnt;

------------------------------------------
9��
class Person{
    int id;
    double weight;
    string name;
public:
    Person(int id=1, string name = "Grace", double weight= 20.5){this->id=id, this->name = name, this->weight=weight;}
    void show(){ cout << id << ' '<<weight << ' ' <<name<<endl;}
};
int main(){
    Person grace, ashlet(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashlet.show();
    helen.show();
}
--------------------------------------------
10��
int big(int a, int b, int c=100){
    if(a<b){
        if(b<c) return b;
        else return c;
    }
    else if(a>b){
        if(a<c) return a;
        else return c;
    }
    //int a1 = (a>b)? a:b;
    //return (c>a1) a1:c; 
}
int main() {
    int x = big(3, 5); //3�� 5�� ū �� 5�� �ִ밪 100���� �����Ƿ�, 5 ����
    int y = big(300, 60); //300�� 60�� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ����
    int z = big(30, 60, 50); // 30�� 60 �� ū �� 60�� �ִ밪 50���� ũ�Ƿ�, 50 ����
    cout << x << ' ' << y << ' ' << z << endl;
}
-------------------------------------------
11��
int add(int a[], int n, int b[] =nullptr){
    int s=0;
    for(int i=0; i<n; i++) s+= a[i];
    if(b!=nullptr)
        for(int i=0; i<n; i++) s+= b[i];
    return s;
}
int main() {
 int a[] = {1, 2, 3, 4, 5};
 int b[] = {6, 7, 8, 9, 10};
 int c = add(a, sizeof(a)/sizeof(int)); //�迭 a�� ������ size �ε������� ��� ���� �� ����
 int d = add(a, sizeof(a)/sizeof(int), b); //�迭 a, b�� ������ size �ε������� ��� ���� �� ���� cout << c << endl; // 15 ���
 cout << d << endl; // 55 ���
 }
-------------------------------------------
12��



*/