#include <iostream>
#include <string.h>
using namespace std;
class Hallym{
    string dept;
public:
    Hallym(string d);
    string getDept();
};

Hallym::Hallym(string d):dept(d){  }
string Hallym::getDept(){
    return dept;
}






