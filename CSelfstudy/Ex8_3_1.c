#include <stdio.h>
double user_abs(double);
int main(){
    double n;
    printf("���� �ϳ��� �Է��ϼ��� :");
    scanf("%lf", &n);
    printf("���밪�� %lf�Դϴ�.", user_abs(n));

}
double user_abs(double n){
    double res = n;
    if(n <0 ){
        res = n*-1;
    }
    return res;
}