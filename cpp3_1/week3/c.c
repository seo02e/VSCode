#include <stdio.h>
#include <string.h>
int main(){
    const char* str = "ABCDEFGH";
    str = str + strlen(str) - 1;
    printf(str);
}