#include <stdio.h>

int main(){
    int age;
    printf("?‚˜?´ë¥? ?…? ¥?•˜?„¸?š” :");
    scanf("%d", &age);
    if(age <= 6 || age >= 70)
        printf("ë¬´ë£Œ?…?¥?…?‹ˆ?‹¤.\n");
    else
        printf("?…?¥ë£ŒëŠ” 3,000?›?…?‹ˆ?‹¤.\n");
    return 0;
}
