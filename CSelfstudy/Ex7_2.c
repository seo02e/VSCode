#include <stdio.h>

int main(){
    int n =1;
    int sum =0;
    while(n<=100){
        if(n%2!=0){
            sum += n;
        }
        n++;
    }
    printf("1���� 100���� Ȧ���� ���� : %d", sum);
}