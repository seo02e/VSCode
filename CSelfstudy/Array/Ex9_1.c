#include <stdio.h>

int main(){
    double arr[5];
    double max=0;
    printf("�ټ� ���� ���ڸ� �Է��ϼ��� :");
    for(int i=0; i<5; i++){
        scanf("%lf", &arr[i]);
    }
    for(int i =0; i<5; i++){
        if(max< arr[i]){
            max = arr[i];
        }
    }
    printf("���� ū ���� : %lf�Դϴ�.", max);

}