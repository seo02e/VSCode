#include <iostream>
using namespace std;
class Rectangle{
    private:
        int length, height;
    public:
        Rectangle();
        Rectangle(int len, int wid);
};

Rectangle::Rectangle(int len, int wid) : length(len), height(wid){
    cout << length << height << endl;
}

int main(){
    Rectangle rec(5, 3);

    return 0;
}