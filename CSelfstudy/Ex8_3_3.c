#include <stdio.h>
double user_abs(double);
double user_pow(double, int);
int main(){
    double x;
    printf("x�� ���� �Է��ϼ��� :");
    scanf("%lf", &x );
    double res = 2*user_pow(x, 3) + 3*user_pow(x, 2)+ 4;
    double res2 = user_abs(res);
    printf("������� %lf�Դϴ�.", res2);

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