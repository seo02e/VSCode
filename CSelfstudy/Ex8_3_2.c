#include <stdio.h>
double user_pow(double, int);
int main(){
    int jso;
    double n;
    double ss;
    printf("밑수를 입력하세요 : ");
    scanf("%lf",  &n);
    printf("지수를 입력하세요 :");
    scanf("%d", &jso);
    ss = user_pow(n,jso);
    printf("거듭제곱은 %lf입니다.", ss);
}
double user_pow(double n, int jso){
    int i;
    double res=1;
    for(i=0; i<jso; i++){
        res = res*n;
    }
    return res;
}