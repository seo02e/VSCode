#include <stdio.h>

int main(){
    int ary[5] = {1,2,3,4,5};
    printf("ó�� �迭�� ����� �� :");
    for( int i=0; i<5; i++){
        printf("%d ",ary[i]);
    }
    printf("\n");
    for(int i =0; i<5/2; i++){
        int ox = ary[i];
        ary[i] = ary[4-i];
        ary[4-i] = ox; 
    }
    printf("�ٲ� �迭�� ����� �� :");
    for( int i=0; i<5; i++){
        printf("%d ",ary[i]);
    }
}
