#include <stdio.h>

int main(){
    int age;
    printf("?��?���? ?��?��?��?��?�� :");
    scanf("%d", &age);
    if(age <= 6 || age >= 70)
        printf("무료?��?��?��?��?��.\n");
    else
        printf("?��?��료는 3,000?��?��?��?��.\n");
    return 0;
}
