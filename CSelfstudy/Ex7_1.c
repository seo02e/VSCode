#include <stdio.h>

int main(){
    int num=0, sum=0;
    printf("����� �Է��ϼ��� :");
    scanf("%d", &num);
    while(num >=0) {
        sum += num;
        printf("���ݱ��� �Էµ� ���� �� :%d\n", sum);
        printf("����� �Է��ϼ��� :");
        scanf("%d", &num);
    }

}