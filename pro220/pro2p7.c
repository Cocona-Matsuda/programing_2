#include <stdio.h>
#include <string.h>

void nibai (int *x, int *y);

int main (void){
    int i;
    int j;

    printf("i：");
    scanf("%d", &i);

    printf("j：");
    scanf("%d", &j);

    nibai(&i, &j);

    printf("i：%d\n", i);
    printf("j：%d\n", j);

    return 0;
}
void nibai(int *x, int *y){
    *x *= 2;
    *y *= 2;
}