#include <stdio.h>

int main(){
    int age;
    printf("?굹?씠瑜? ?엯?젰?븯?꽭?슂 :");
    scanf("%d", &age);
    if(age <= 6 || age >= 70)
        printf("臾대즺?엯?옣?엯?땲?떎.\n");
    else
        printf("?엯?옣猷뚮뒗 3,000?썝?엯?땲?떎.\n");
    return 0;
}
