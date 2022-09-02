#include <stdio.h>

int main(){
    int ary[5] = {1,2,3,4,5};
    printf("처음 배열에 저장된 값 :");
    for( int i=0; i<5; i++){
        printf("%d ",ary[i]);
    }
    printf("\n");
    for(int i =0; i<5/2; i++){
        int ox = ary[i];
        ary[i] = ary[4-i];
        ary[4-i] = ox; 
    }
    printf("바뀐 배열에 저장된 값 :");
    for( int i=0; i<5; i++){
        printf("%d ",ary[i]);
    }
}
