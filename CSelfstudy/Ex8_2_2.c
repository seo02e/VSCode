#include <stdio.h>
double areas(double r){
    double one = r*r*3.14;
    return one;
}

int main(){
    double r;
    printf("반지름을 입력하세요 :");
    scanf("%lf", &r);
    double result = areas(r);
    printf("면적은 : %.3lf입니다.", result);
    return 0;
}