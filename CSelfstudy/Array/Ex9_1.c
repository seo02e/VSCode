#include <stdio.h>

int main(){
    double arr[5];
    double max=0;
    printf("다섯 개의 숫자를 입력하세요 :");
    for(int i=0; i<5; i++){
        scanf("%lf", &arr[i]);
    }
    for(int i =0; i<5; i++){
        if(max< arr[i]){
            max = arr[i];
        }
    }
    printf("가장 큰 값은 : %lf입니다.", max);

}