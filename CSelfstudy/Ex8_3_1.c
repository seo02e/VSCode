#include <stdio.h>
double user_abs(double);
int main(){
    double n;
    printf("숫자 하나를 입력하세요 :");
    scanf("%lf", &n);
    printf("절대값은 %lf입니다.", user_abs(n));

}
double user_abs(double n){
    double res = n;
    if(n <0 ){
        res = n*-1;
    }
    return res;
}