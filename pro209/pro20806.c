#include <stdio.h>
#include <string.h>

int main (void){
    int i;

    printf("回数：");
    scanf("%d", &i);

    hoge(i);

    return 0;
}

void hoge(int n){
    int i;

    for ( i = 0; i < n; i++){
        printf("hoge\n");
    }
}