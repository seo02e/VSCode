#include <stdio.h>

int main(){
    double A, B, res;
    char c;
    printf("수식을 입력하세요 :");
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
            printf("잘못된 연산식입니다.");
    }
    printf("연산결과는 %.2lf입니다.", res);

}