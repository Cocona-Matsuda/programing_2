#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int *p;
    int n;
    int i;
    int sum;

    printf("配列の要素数：");
    scanf("%d", &n);

    p = (int *)malloc(sizeof(int) * n);
    if(p == NULL){
        exit(EXIT_FAILURE);
    }

    sum = 0;
    for ( i = 0; i < n; i++)
        printf(">>");
        scanf("%d", &p[i]);^1、
        sum += p[i];
    }
    printf("平均値： %f\n", (float)sum / n);
    free(p);

    return 0;
}