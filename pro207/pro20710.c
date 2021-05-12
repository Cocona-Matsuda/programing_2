#include <stdio.h>
#include <string.h>

int bai(int n, int i){
    return (n * ( i + 1 ));
}

int main (void){
    int n;
    int num[10];
    int i;

    printf("整数：");
    scanf("%d",&n);

    for ( i = 0; i < 10; i++){
        //関数への引渡し
        num[i] = bai(n, i);
    }
    for ( i = 0; i < 10; i++){
        printf("%2d * %2d = %2d\n", n, i + 1, num[i]);
    }

    return 0;
}