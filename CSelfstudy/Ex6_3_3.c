#include <stdio.h>

int main(){
    char sex;
    double weight, height, BMI;
    printf("������ �Է��ϼ���(m/f) :");
    scanf( "%c", &sex);
    printf("�����Ը� �Է��ϼ���(kg) :");
    scanf("%lf", &weight);
    printf("Ű�� �Է��ϼ���(cm) :");
    scanf("%lf", &height);
    height = height/100;
    BMI = weight/(height*height);
    printf("����� BMI�� : %.1lf�Դϴ�.\n", BMI);
    if(sex == 'm'){
        if(BMI < 20.0){
            printf("��ü���Դϴ�.");
        }
        else if(BMI <25){
            printf("ǥ��ü���Դϴ�.");
        }
        else{
            printf("��ü���Դϴ�.");
        }
    }
    else if(sex == 'f'){
        if(BMI <18.5){
            printf("��ü���Դϴ�.");
        }
        else if(BMI < 25){
            printf("ǥ��ü���Դϴ�.");
        }
        else{
            printf("��ü���Դϴ�.");
        }
    }


}