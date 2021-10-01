#include <stdio.h>
#include <string.h>

int main (void){
    int m[100];
    int i;
    int sum;

    float y;
    float *p;

    for ( i = 0; i < 100; i++){
        m[i] = i + 1;
    }
    sum = 0;
    for ( i = 0; i < 100; i++)
    {
        sum += *(p + i);
    }
    printf("合計:   %d\n", sum);




    return 0;
}