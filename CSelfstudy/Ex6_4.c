#include <stdio.h>

int main(){
    int grade;
    printf("�г��� �Է��ϼ��� :");
    scanf( "%d", &grade);
    switch(grade){
        case 1 :
            printf("��ϱ��� 130�����Դϴ�.");
            break;
        case 2 :
        case 3 :
            printf("��ϱ��� 100�����Դϴ�.");
            break;
        case 4:
            printf("��ϱ��� 110�����Դϴ�.");
            break;
        default :
            printf("�г��� �߸� �Է��Ͽ����ϴ�.");
    }
}