#include <stdio.h>

int main(){
    char str1[] = "There is no royal road to learning.";
    char str2[80];

    int size = sizeof(str1)/sizeof(str1[0]);
    for(int i =0; i<size; i++){
        str2[i] = str1[i];
    }
    printf("����� ���ڿ� : %s", str2);

}