#include <stdio.h>

void main(){
    int arr[][3] = {{3,4,5},{6,7,8}};
    int (*parr)[3] =arr;

    printf("\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", parr[i][j]);
        }
    }
}