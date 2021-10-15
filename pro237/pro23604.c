#include <stdio.h>
#include <string.h>

int main (void){
    int r; //半径
    float S; //面積
    float pi = 3.14;

    printf("円の半径：");
    scanf("%d", &r);

    S = (float)r * (float)r * pi;

    printf("半径 %dの円の面積は %gです。\n", r, S);

    return 0;
}