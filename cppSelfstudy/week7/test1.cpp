#include <iostream>
using namespace std;

class Circle {
    int radius; 
    public:
    Circle() = default;
    Circle(int r) : radius(r) { }
    void setRadius(int r) { radius = r; }
    int getRadius() { return radius; } 
    double getArea(); 
};

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle cirarr[2]; //Circle ��ü �迭 ����, ����Ʈ �����ڰ� ������ ����
    for(int i=0; i<2; i++) //�迭�� �� ������ ��ü�� ��� ����
        cout << "Circle " << i << "�� radius=" << cirarr[i]. getRadius() << endl;
    cirarr[0].setRadius(10); //�迭�� �� ������ ��ü�� ��� ����
    cirarr[1].setRadius(20);
    for(int i=0; i<2; i++) 
        cout << "Circle " << i << "�� ����=" << cirarr[i].getArea() << endl;
    for (auto obj : cirarr) // auto & ���� ��� for
        cout << "Circle ����= >> " << obj.getArea() << endl;
    Circle *p; 
    p = cirarr; 
    for(int i=0; i<2; i++) { // ��ü �����ͷ� �迭 ����
        cout << "Circle " << i << "�� ����= " << p->getArea() << endl;
        p++; 
    }
}