#include <stdio.h>

int main(){
    char word[80];
    int i=0;
    printf("�ܾ �Է��ϼ��� :");
    scanf("%s", word);
    while(word[i]!='\0'){
        i++;
    }
    for(int j=0; j<i/2; j++){
        char temp = word[j];
        word[j] = word[i-1-j];
        word[i-1-j] = temp;
    }
    printf("�ܾ �������� : %s", word);
}