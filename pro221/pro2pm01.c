#include <stdio.h>
#include <string.h>

int main (void){
    int a[3];
    int *p0;
    int *p1;
    int *p2;
    int i;

    p0 = &a[0];
    p1 = &a[1];
    p2 = &a[2];

    printf("a[0]:");
    scanf("%d", p0);

    printf("a[1]:");
    scanf("%d", p1);

    printf("a[2]:");
    scanf("%d", p2);

    for ( i = 0; i < 3; i++){
        printf("a[%d] : %d\n", i, a[i]);
    }

    return 0;
}