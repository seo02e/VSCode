#include <iostream>
using namespace std;
class Circle {
private:
    int radius;
public:
    Circle() { // 자동 인라인 함수
    radius = 1;
}
Circle(int r); 
    double getArea() { // 자동 인라인 함수
    return 3.14*radius*radius;
}
};

Circle::Circle(int r) {
    radius = r;
}

int main(){

    return 0;
}