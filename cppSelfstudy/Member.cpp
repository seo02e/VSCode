#include <iostream>

class Member{
    int value;
    public:
        int getValue();
};

int Member:: getValue(){
    return value;
}