#include <stdio.h>
double user_pow(double, int);
int main(){
    int jso;
    double n;
    double ss;
    printf("�ؼ��� �Է��ϼ��� : ");
    scanf("%lf",  &n);
    printf("������ �Է��ϼ��� :");
    scanf("%d", &jso);
    ss = user_pow(n,jso);
    printf("�ŵ������� %lf�Դϴ�.", ss);
}
double user_pow(double n, int jso){
    int i;
    double res=1;
    for(i=0; i<jso; i++){
        res = res*n;
    }
    return res;
}