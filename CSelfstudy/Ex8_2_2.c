#include <stdio.h>
double areas(double r){
    double one = r*r*3.14;
    return one;
}

int main(){
    double r;
    printf("�������� �Է��ϼ��� :");
    scanf("%lf", &r);
    double result = areas(r);
    printf("������ : %.3lf�Դϴ�.", result);
    return 0;
}