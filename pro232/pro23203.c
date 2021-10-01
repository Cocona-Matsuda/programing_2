#include <stdio.h>

// 単純マクロの定義
#define N 10

int main (void){
    int score[10];
    int i, sum;
    sum = 0;

    for(i = 0; i < N; i++){
        printf("%d人目の点数：", i+1);
        scanf("%d", &score[i]);
    }
    for(i = 0; i < N; i++){
        sum += score[i];
    }
}