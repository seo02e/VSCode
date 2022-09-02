#include <stdio.h>
double div(double , double);
int main(){
    double a,b;
    printf("두 개의 숫자를 입력하세요 :");
    scanf("%lf%lf", &a, &b);
    double result = div(a,b);
    printf("나눗셈 결과는 : %lf", result);

    return 0;
}

double div(double a, double b){
    double res = a/b;
    return res;
}