#include <stdio.h>
double mul(double n, double t){
    double d = n*t;
    return d;
}
int main(){
    double n, t;
    printf("�� ���� ���ڸ� �Է��ϼ��� :");
    scanf("%lf%lf", &n, &t);
    printf("�� ���� ���� : %.1lf", mul(n,t));
}
