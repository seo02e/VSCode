#include <stdio.h>

int main(){
    char in;
    printf("문자를 입력하세요 :");
    scanf("%c", &in);
    if(in =='f' || in =='F'){
        printf("여자입니다.");
    }
    else{
        printf("남자입니다.");
    }

}