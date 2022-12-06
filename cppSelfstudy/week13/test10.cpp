#include <iostream>
#include <string>
using namespace std;
class SortedArray {
    int size; //���� �迭�� ũ��
    int *p; //���� �迭�� ���� ������
    void sort(); //���� �迭�� ������������ ����
public:
    SortedArray(); //p�� nullptr�� size�� 0���� �ʱ�ȭ
    SortedArray(SortedArray &arr); //���� ������
    SortedArray(int arr[], int size);//������. ���� �迭�� ũ�⸦ ���޹޾� p�� ���� �� sort() ȣ�� 
    ~SortedArray(); //�Ҹ���
    SortedArray operator+(SortedArray &b);
    SortedArray &operator=(const SortedArray &b); //���� �迭�� b �迭�� ����
    void show(string name); //�迭�� ���� ���
};
SortedArray SortedArray::operator+(SortedArray &b){
    SortedArray temp;
    temp.size = this->size+b.size;
    temp.p = new int[temp.size];
    for(int i=0; i<this->size ; i++){
        temp.p[i] =  this->p[i];
        }
        for(int i=this->size;i<temp.size;i++){
            temp.p[i] = b.p[i-this->size];
        }
        return temp;
}
SortedArray& SortedArray::operator=(const SortedArray &b){
    this->size = b.size;
       this->p = new int[b.size];
       for(int i=0; i<b.size;i++){
           this->p[i] = b.p[i];
       }
        return *this;
}
SortedArray::SortedArray(){
    size =0;
}
SortedArray::SortedArray(SortedArray &arr){
    size = arr.size;
    p=arr.p;
}
SortedArray::SortedArray(int arr[], int size){
    this -> size = size;
    p =new int[size];
    for(int i=0; i<size; i++){
        this -> p[i] =  arr[i];
    }
}
void SortedArray::show(string name){
    sort();
    for(int i=0; i<size; i++){
        if(i==0)
            cout<< name <<" = { "<<p[0]<< " ";
        else if(i==size-1)
            cout<<p[size-1]<<  " }" <<endl;
        else
            cout<< p[i]<<" ";
    }
}
void SortedArray::sort() { //�������� ���� ����
    if (p == nullptr || size == 0)
        return;
    for (int i = 0; i < size-1; i++) {
        for (int j =i; j < size-1; j++) {
            if (p[j] > p[j + 1]){
                int temp;
                temp = p[j];
                p[j] = p[j+1];
                p[j + 1] = temp;
            }
        }
    }  
}
SortedArray::~SortedArray(){
}
int main() {
    int n[] = {2, 20, 6};
    int m[] = {10, 7, 8, 30};
    SortedArray a(n, 3), b(m, 4), c;
    c = a + b;
    cout<<"20215135_���ؼ�"<<endl;
    a.show("a");
    b.show("b");
    c.show("c");
}