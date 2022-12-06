#include <iostream>
using namespace std;
class Circle {
    int radius;
public:
    Circle(int radius = 0);
    void show(string name);
    Circle& operator ++ ();
    Circle& operator + (int a);
    Circle operator ++ (int a);
};
Circle::Circle (int radius){
    this->radius = radius;
}
void Circle::show(string rad){
    cout << rad << " : " << radius <<endl;
}
Circle& Circle::operator++(){
    ++radius;
    return *this;
}
Circle& Circle::operator+(int a){
    this->radius += 3;
    return *this;
}
Circle Circle::operator++(int c){
    Circle tmp = *this;
    radius++;
    return tmp;
}

int main() {
    cout << "20215135 ±èÁØ¼­" <<endl;
    Circle a(5), b(4);
    a.show("a");
    b.show("b");
    ++a;
    b = a++; 
    b.show("b");
    b = a + 3; 
    b.show("b");
}