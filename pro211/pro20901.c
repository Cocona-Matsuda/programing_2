#include <stdio.h>
#include <string.h>

float kai(int x);

int main (void){
    int i;
    printf("n>>");
    scanf("%d", &i);

    printf("%dの階乗は%.0fになります。\n", i, kai(i));

    return 0;
}

float kai(int x){
    float kekka;

    if(x == 1){
        return 1;
    }
    kekka = kai(x - 1) * x;
    return (kekka);
}