#include <stdio.h>

int main(){
    int year;
    printf("������ �Է��ϼ��� :");
    scanf("%d", &year);
    if(year%100==0 && year%400!=0){
        printf("����Դϴ�.");
    }
    else{
        printf("�����Դϴ�.");
    }
}