#include <stdio.h>
#include <string.h>

int input(int x, int y){
    int r;

    if (x > y){
        r = 1;
    }else if (x == y){
        r = 0;
    }else{
        r = -1;
    }

    return r;
}

int main (void){
    int x, y;

    printf("整数１：");
    scanf("%d", &x);

    printf("整数２：");
    scanf("%d", &y);

    switch (input(x, y)){
    case 1:
        printf("１の方が大きい\n");
        break;

    case -1:
        printf("２の方が大きい\n");
        break;

    case 0:
        printf("等しい\n");
        break;

    }

    return 0;
}