#include <stdio.h>

int main (void){
    int x;
    printf("xの値：");
    scanf("%d",&x);

    if (x >= 60){
        printf("合格\n");
    }else{
        printf("不合格\n");
    }


    return 0;
}