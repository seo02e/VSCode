#include <iostream>
#include <memory>
using namespace std;
class Rec {
 int w, h;
public:
 int getW();
 int getH();
 Rec() { }
 Rec(int a, int b) : w(a), h(b) { }
 void write(){
    cout <<""<<endl;
 };

};
int main() {
 Rec r(3,4);
 Rec *p = new Rec;
 p = &r;
 (*p).write();
 p->write();

 Rec *arr = new Rec[4]{{3,4},{1,2},{5,6} };

auto arr = make_unique<Rec[]>(4);
delete []arr;





}
