#include <stdio.h>

int main(){
    char sex;
    double weight, height, BMI;
    printf("성별을 입력하세요(m/f) :");
    scanf( "%c", &sex);
    printf("몸무게를 입력하세요(kg) :");
    scanf("%lf", &weight);
    printf("키를 입력하세요(cm) :");
    scanf("%lf", &height);
    height = height/100;
    BMI = weight/(height*height);
    printf("당신의 BMI는 : %.1lf입니다.\n", BMI);
    if(sex == 'm'){
        if(BMI < 20.0){
            printf("저체중입니다.");
        }
        else if(BMI <25){
            printf("표준체중입니다.");
        }
        else{
            printf("과체중입니다.");
        }
    }
    else if(sex == 'f'){
        if(BMI <18.5){
            printf("저체중입니다.");
        }
        else if(BMI < 25){
            printf("표준체중입니다.");
        }
        else{
            printf("과체중입니다.");
        }
    }


}