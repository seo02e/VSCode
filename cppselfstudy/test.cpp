#include <iostream>
using namespace std;
auto sum(auto s, auto e);

auto sum(auto s, auto e){
  int tmp, res, s, e =0;
  if(s>e) {
    tmp =e;
    e=s;
    s= tmp;
  }
  for (auto k=s; k<=e; k++){
    res += k;
  }
  return res;
}

int main(){
  int a, b= 0;
  cout << "ù ���� ������ ���� �Է��ϼ��� :";
  cin >> a >> b;
  cout << a<<"���� "<< b<<"������ ���� "<< sum(a,b)<< "�Դϴ�."<< endl;
  return 0;
}