#include <iostream>
using namespace std;
class Circle {
private:
    int radius;
public:
    Circle() { // �ڵ� �ζ��� �Լ�
    radius = 1;
}
Circle(int r); 
    double getArea() { // �ڵ� �ζ��� �Լ�
    return 3.14*radius*radius;
}
};

Circle::Circle(int r) {
    radius = r;
}

int main(){

    return 0;
}