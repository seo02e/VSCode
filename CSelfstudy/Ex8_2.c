#include <stdio.h>
double mul(double n, double t){
    double d = n*t;
    return d;
}
int main(){
    double n, t;
    printf("두 개의 숫자를 입력하세요 :");
    scanf("%lf%lf", &n, &t);
    printf("두 수의 곱은 : %.1lf", mul(n,t));
}
