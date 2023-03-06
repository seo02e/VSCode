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
  cout << "첫 수와 마지막 수를 입력하세요 :";
  cin >> a >> b;
  cout << a<<"부터 "<< b<<"까지의 합은 "<< sum(a,b)<< "입니다."<< endl;
  return 0;
}