#include <stdio.h>

int main(){
    char ary[80];
    int i=0;
    printf("�ܾ �Է��ϼ��� :");
    scanf("%s", ary);
    while(ary[i]!='\0'){
        i++;
    }
    printf("%s�ܾ��� ���̴� %d���Դϴ�.", ary, i);
    return 0;
}