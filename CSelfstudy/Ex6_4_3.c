#include <stdio.h>

int main(){
    int code;
    double pay, kw, c;
    printf("코드번호를 입력하세요(1.가정용, 2.산업용, 3.교육용) : ");
    scanf("%d", &code);
    printf("전기 사용량을 입력하세요 (kw) : ");
    scanf("%lf", &kw);
    switch(code){
        case 1:
            c = (1130+(127.8*kw))*0.09;
            pay =1130+(127.8*kw)+c;
            break;
        case 2:
            c = (660+(88.5*kw))*0.08;
            pay =660+(88.5*kw)+c;
            break;
        case 3:
            c = (370+(52*kw))*0.05;
            pay =370+(52*kw)+c;
            break;
        default:
            printf("잘못된 코드번호입니다.");
            break;
    }
    printf("전기요금은 %.0lf입니다.", pay);
}