#include <stdio.h>

int main(){
    int code;
    double pay, kw, c;
    printf("�ڵ��ȣ�� �Է��ϼ���(1.������, 2.�����, 3.������) : ");
    scanf("%d", &code);
    printf("���� ��뷮�� �Է��ϼ��� (kw) : ");
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
            printf("�߸��� �ڵ��ȣ�Դϴ�.");
            break;
    }
    printf("�������� %.0lf�Դϴ�.", pay);
}