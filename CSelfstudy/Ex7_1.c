#include <stdio.h>

int main(){
    int num=0, sum=0;
    printf("양수를 입력하세요 :");
    scanf("%d", &num);
    while(num >=0) {
        sum += num;
        printf("지금까지 입력된 값의 합 :%d\n", sum);
        printf("양수를 입력하세요 :");
        scanf("%d", &num);
    }

}