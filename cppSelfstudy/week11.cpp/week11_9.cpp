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
/* 실습문제 풀이
-------------------------------------
2번
id pass 변수 값 전달 x
id.pass 매개변수 값 전달 x
pass에 매개변수 값 전달 x 
-------------------------------------
3번
int sum(int a, int b, int c=30){
    return a+b+c;
}
cout << "sum="<<sum(2,6,4)<<endl;
cout << "sum="<<sum(3,2)<<endl;
------------------------------------
4번
double sum(double a, double b){
    return a+b+c;
}
int main(){
    cout << "sum = " << sum() << endl;
    cout << "sum = " << sum(3.4) << endl;
    cout << "sum = " << sum(3.4,6.5) << endl;
}
-------------------------------------------
5번
디폴트함수는 끝쪽에 몰려서 선언되어야 함.
int calc(int a, int b=5, int c=0, int d=0)
----------------------------------------------
6번
double sum(double a=0, double b=0, double c=0){
    return a+b+c;
}
int main(){
    cout << "sum = " << sum(2,6,5) << endl;
    cout << "sum = " << sum(3.5, 5.6) << endl;
    cout << "sum = " << sum(5, 12) << endl;
}
------------------------------------------
7번
#include <iostream>
using namespace sed;

void fillLine(int a, char c ='*'){
    for(int i=0; i<n; i++){
        cout << c;
    }
    cout << endl;
}
int main(){
    filldLine(); 매개변수 없이 함수를 사용하려면
    void fillLine 의 매개변수 n에 값을 넣어주면 된다.
    fillLine(25);
    fillLine(10, '%');
}
-----------------------------------------
8번
A. 
Test t, *p;

t.print();객체 이름 t라고 가정
Test::print();
b->print();

B.
전역공간에서 초기화하지 않기위해 inline함수 사용
int Test::cnt=5;//값을 정해주지 않으면 오류, 또는 인라인으로 하기 //외부 선언, 전역공간에서 초기화

C.
static int cnt -> inline static int cnt;

------------------------------------------
9번
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
10번
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
    int x = big(3, 5); //3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
    int y = big(300, 60); //300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
    int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
    cout << x << ' ' << y << ' ' << z << endl;
}
-------------------------------------------
11번
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
 int c = add(a, sizeof(a)/sizeof(int)); //배열 a의 정수를 size 인덱스까지 모두 더한 값 리턴
 int d = add(a, sizeof(a)/sizeof(int), b); //배열 a, b의 정수를 size 인덱스까지 모두 더한 값 리턴 cout << c << endl; // 15 출력
 cout << d << endl; // 55 출력
 }
-------------------------------------------
12번



*/