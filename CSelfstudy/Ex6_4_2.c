#include <stdio.h>

int main(){
    double A, B, res;
    char c;
    printf("������ �Է��ϼ��� :");
    scanf("%lf%c%lf", &A, &c, &B);
    switch(c){
        case '+':
            res = A+B;
            break;
        case '-':
            res = A-B;
            break;
        case '*':
            res = A*B;
            break;
        case '/':
            res = A/B;
            break;
        default:
            printf("�߸��� ������Դϴ�.");
    }
    printf("�������� %.2lf�Դϴ�.", res);

}