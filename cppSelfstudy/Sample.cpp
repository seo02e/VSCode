#include <iostream>

class Sample{
    private:
        int x;
    public:
        int getX() const;
    
};

int main(){
    //Sample s1(4)�� �Ű������� �޴� �����ڸ� �������� �ʾұ� ������ �����Ͽ���
    Sample s2();
    Sample s3{};

    return 0;
}