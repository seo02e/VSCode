#include <stdio.h>
double user_abs(double);
double user_pow(double, int);
int main(){
    double x;
    printf("x의 값을 입력하세요 :");
    scanf("%lf", &x );
    double res = 2*user_pow(x, 3) + 3*user_pow(x, 2)+ 4;
    double res2 = user_abs(res);
    printf("결과값은 %lf입니다.", res2);

}
double user_pow(double n, int jso){
    int i;
    double res=1;
    for(i=0; i<jso; i++){
        res = res*n;
    }
    return res;
}
double user_abs(double n){
    double res = n;
    if(n <0 ){
        res = n*-1;
    }
    return res;
}