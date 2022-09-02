#include <stdio.h>
double div(double, double);
void menu_disp();
void res_disp(double);
int main(){
    int n;
    double a,b;
    double res;
    menu_disp();
    printf(">> 원하는 메뉴를 선택하세요 :");
    scanf("%d", &n);
    printf("두 개의 숫자를 입력하세요 :");
    scanf("%lf%lf", &a, &b);
    switch(n){
        case 1:
            res = a+b;
            break;
        case 2:
            res = a-b;
            break;
        case 3:
            res = a*b;
            break;
        case 4:
            res = div(a,b);
            break;
        default:
            printf("잘못된 메뉴를 입력하였습니다.");
            break;
    }
    res_disp(res);
}
double div(double a, double b){
    double res = a/b;
    return res;
}
void menu_disp(){
    printf("===========메뉴==========\n");
    printf("1. 덧셈 (addition)\n");
    printf("2. 뺄셈 (subtraction)\n");
    printf("3. 곱셈 (multipliction)\n");
    printf("4. 나눗셈 (division)\n");
}
void res_disp(double n){
    printf("결과값은 %lf입니다.", n);

}