#include <stdio.h>

int main(){
    int grade;
    printf("학년을 입력하세요 :");
    scanf( "%d", &grade);
    switch(grade){
        case 1 :
            printf("등록금은 130만원입니다.");
            break;
        case 2 :
        case 3 :
            printf("등록금은 100만원입니다.");
            break;
        case 4:
            printf("등록금은 110만원입니다.");
            break;
        default :
            printf("학년을 잘못 입력하였습니다.");
    }
}