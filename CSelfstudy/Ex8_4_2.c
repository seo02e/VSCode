#include <stdio.h>
double div(double , double);
int main(){
    double a,b;
    printf("�� ���� ���ڸ� �Է��ϼ��� :");
    scanf("%lf%lf", &a, &b);
    double result = div(a,b);
    printf("������ ����� : %lf", result);

    return 0;
}

double div(double a, double b){
    double res = a/b;
    return res;
}