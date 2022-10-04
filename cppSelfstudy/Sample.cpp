#include <iostream>

class Sample{
    private:
        int x;
    public:
        int getX() const;
    
};

int main(){
    //Sample s1(4)는 매개변수를 받는 생성자를 정의하지 않았기 때문에 컴파일오류
    Sample s2();
    Sample s3{};

    return 0;
}