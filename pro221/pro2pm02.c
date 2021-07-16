#include <stdio.h>
#include <string.h>

void input_int(int *p);

int main (void){
    int a[3];
    int i;

    for ( i = 0; i < 3; i++){
        input_int(&a[i]);
    }

    for ( i = 0; i < 3; i++){
        printf("a[%d] : %d\n", i, a[i]);
    }

    return 0;
}
void input_int(int *p){
    printf("整数：");
    scanf("%d", p);
}