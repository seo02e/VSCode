#include <stdio.h>
int main(){
    int n, t=1;
    printf("�� ���� ���� �Է��ϼ��� :");
    scanf("%d", &n);
    while(t<=9){
        int w= n*t;
        printf("%d * %d = %d\n", n, t, w);
        t++;
    }
}