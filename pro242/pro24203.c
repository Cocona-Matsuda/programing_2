#include <stdio.h>
#include <string.h>

int main (void){
    int num[3];
    int *p;
    int i;

    // pにmの先頭アドレスを代入
    p = m;

    for(i = 0;i < 3;i++){
        printf("m[i]:");
        scanf("%d", &p[i]);
    }

    printf("m[0]: %d\n", m[0]);
    printf("m[1]: %d\n", m[1]);
    printf("m[2]: %d\n", m[2]);

    return 0;
}