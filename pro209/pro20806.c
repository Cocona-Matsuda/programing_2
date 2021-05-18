#include <stdio.h>
#include <string.h>

// 関数のプロトタイプ宣言
void hoge(int n);

int main (void){
    int i;

    printf("回数：");
    scanf("%d", &i);

    hoge(i);

    return 0;
}
/*
    pro20805のプログラムから
    mainとhogeを入れ替えたので、
    プロトタイプ宣言を
*/
void hoge(int n){
    int i;

    for ( i = 0; i < n; i++){
        printf("hoge\n");
    }
}