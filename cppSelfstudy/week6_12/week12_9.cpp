#include <iostream>
#include <string>
using namespace std;

class Array {
    double *ptr;
    int size;
    public:
    Array(int size);
    ~Array();
    void show(string name);
    Array& operator =(const Array g);
    double& operator[](int a);
    //[] 연산자 중복
    //= 연산자 중복
};
Array::~Array() {
}
void Array::show(string name){
    cout << name<< " = { ";
    for(int i=0; i<size; i++){
        cout << ptr[i] << "  ";
    }
    cout <<"}"<<endl;
}
double &Array::operator[](int rr){
    if(rr >= size){
        cout << "인덱스 범위 초과 오류"<<endl;
        exit(1);
    } 
    return ptr[rr];
}
Array::Array(int size){
    this->size = size;
    ptr = new double[size];
}
Array& Array::operator=(const Array g){
    for(int i=0;i<g.size;i++){
        ptr[i] = g.ptr[i];
    }
    return *this;
}
int main() {
 int size;
 cout << "array size ? ";
 cin >> size;
 Array arr(size), brr(size);
    for (int i = 0; i < size; i++) {
    cout << i << ") input>> ";
    cin >> arr[i];
 }
 arr.show("arr");
 brr = arr;
 brr.show("brr");
 brr[2] = 34.5;
 brr[4] = 56.3;
 arr.show("arr");
 brr.show("brr");
 return 0;
}
