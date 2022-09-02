#include <stdio.h>

int main(){
    int year;
    printf("연도를 입력하세요 :");
    scanf("%d", &year);
    if(year%100==0 && year%400!=0){
        printf("평년입니다.");
    }
    else{
        printf("윤년입니다.");
    }
}