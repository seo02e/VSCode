#include <iostream>
#include <string>
using namespace std;
class Pizza{
    string *size;
public:
    Pizza() =default;
    ~Pizza();
    void setSize(string s);
    string getSize();
};
class PizzaManager{
    void setSize(string s){
        *size = s;
    }
    string getSize(){
        return size;
    }
};
int main(){
    PizzaManager pm;
    pm.status();
    return 0;
}