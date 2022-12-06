#include <stdio.h>

typedef int int32;
typedef struct myadd MYADD;
struct myadd{
    int32 arr[2];
    int32 result;

    void (*pmyadd_struct)(MYADD *);
};
int32 myadd_val(int32* x_arr){
    return x_arr[0]+x_arr[1];
}
void myadd_ref(int32* x_arr, int32* x_reult){
    *x_reult = x_arr[0]+x_arr[1];
}
//--------------myadd_struct()함수--------------
void myadd_struct(MYADD *x_myadd){
    x_myadd -> result = x_myadd->arr[0] + (*x_myadd).arr[1];
}
//--------------myadd_struct()함수--------------
void main(){
    MYADD myadd1;
    myadd1.arr[0] =3;
    myadd1.arr[1] =4;
    myadd1.pmyadd_struct = myadd_struct;

    myadd1.pmyadd_struct(&myadd1);
    //--------------출력코드--------------
    printf("result: %d + %d = %d \n",myadd1.arr[0],myadd1.arr[1], myadd1.result);

    //--------------출력코드--------------
}
