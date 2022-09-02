#include <stdio.h>
int main(){
    int n, t=1;
    printf("한 개의 단을 입력하세요 :");
    scanf("%d", &n);
    while(t<=9){
        int w= n*t;
        printf("%d * %d = %d\n", n, t, w);
        t++;
    }
}