#include <stdio.h>

int main (void){
    int x;

    printf("xの値を入力して下さい：");
    scanf("%d",&x);

    printf("評価：");
    if (x >= 90){
        printf("S\n");
    }else if (x >= 80){
        printf("A");
    }else if (x >= 70){
        printf("B");
    }else if(x >= 60){
        printf("C");
    }else if (x < 60){
        printf("D");
    }

    return 0;
}