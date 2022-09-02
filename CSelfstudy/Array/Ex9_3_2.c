#include <stdio.h>

int main(){
    char word[80];
    int i=0;
    printf("단어를 입력하세요 :");
    scanf("%s", word);
    while(word[i]!='\0'){
        i++;
    }
    for(int j=0; j<i/2; j++){
        char temp = word[j];
        word[j] = word[i-1-j];
        word[i-1-j] = temp;
    }
    printf("단어를 뒤집으면 : %s", word);
}