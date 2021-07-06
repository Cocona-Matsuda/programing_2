#include <stdio.h>
#include <string.h>

int main (void){
    int x, y;
    int *p;
    int *q;

    p = &x;
    q = &y;

    printf("x:");
    scanf("%d", p);
    printf("y:");
    scanf("%d", q);

    if (p > q){
        printf("xの方が大きいです．\n");
    }else if(q > p){
        printf("yの方が大きいです．\n");
    }else{
        printf("同じです．\n");
    }

    return 0;
}