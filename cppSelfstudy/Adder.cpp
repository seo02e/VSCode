#include <iostream>

#include "Adder.h"
using namespace std;
class Calculator{
    public:
        void run();
};

void Calculator::run(){
    cout << "두 개의 수를 입력하세요>>";
    int a,b;
    cin >> a >> b;
    Adder adder(a, b);
    cout << adder.process();
}
int main(){
    Calculator calc;
    calc.run();
}