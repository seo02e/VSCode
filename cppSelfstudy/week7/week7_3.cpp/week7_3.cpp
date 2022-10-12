#include <iostream>
using namespace std;
void fun (int* x){
 cout << *(x + 2);
}
int main (){
 int sample2[] = {0, 10, 20, 30, 40};
 fun(sample2);

 int sample [5] = {5, 10, 15, 20, 25};
    cout << *sample + 2 << endl; 
    cout << *(sample + 2); 
 return 0;
}