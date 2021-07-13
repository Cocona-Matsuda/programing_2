#include <stdio.h>
#include <string.h>

int main (void){
    int x, y;
    int *p, *q;

    p = &x; /*xをさす*/
    q = &y; /*yをさす*/

    printf("x:");
    scanf("%d", &p);
    printf("y:");
    scanf("%d", &q);

    if (p > q){
        printf("xの方が大きいです\n");
    }else if (p == q){
        printf("両方同じです\n");
    }else{
        printf("yの方が大きいです\n");
    };

    return 0;
}