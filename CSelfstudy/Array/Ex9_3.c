#include <stdio.h>

int main(){
    char ary[80];
    int i=0;
    printf("단어를 입력하세요 :");
    scanf("%s", ary);
    while(ary[i]!='\0'){
        i++;
    }
    printf("%s단어의 길이는 %d자입니다.", ary, i);
    return 0;
}