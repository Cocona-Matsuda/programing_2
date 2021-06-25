#include<stdio.h>

float func(int x){
    float kekka;
    if (x == 1) {
        return (1);
    }
    kekka = func(x - 1) * x;
    return (kekka);
}
int main (void){
    int i = 4;
    printf("%f\n", func(i));
    return (0);
}