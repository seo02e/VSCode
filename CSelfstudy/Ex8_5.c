#include <stdio.h>
double div(double, double);
void menu_disp();
void res_disp(double);
int main(){
    int n;
    double a,b;
    double res;
    menu_disp();
    printf(">> ���ϴ� �޴��� �����ϼ��� :");
    scanf("%d", &n);
    printf("�� ���� ���ڸ� �Է��ϼ��� :");
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
            printf("�߸��� �޴��� �Է��Ͽ����ϴ�.");
            break;
    }
    res_disp(res);
}
double div(double a, double b){
    double res = a/b;
    return res;
}
void menu_disp(){
    printf("===========�޴�==========\n");
    printf("1. ���� (addition)\n");
    printf("2. ���� (subtraction)\n");
    printf("3. ���� (multipliction)\n");
    printf("4. ������ (division)\n");
}
void res_disp(double n){
    printf("������� %lf�Դϴ�.", n);

}