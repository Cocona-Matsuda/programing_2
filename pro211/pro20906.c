#include <stdio.h>
#include <string.h>

void copy(char saki[], char moto[]);

int main (void){
    char str1[100];
    char str2[100];
    int kaisuu;

    printf("文字列：");
    scanf("%s", str1);

    copy(str2, str1);

    printf("コピー文字列：%s\n", str2);

    return 0;
}
void copy(char saki[], char moto[]){
    int i = 0;
    while (moto[i] != '\0'){
        saki[i] = moto[i];
        i++;
    }
    saki[i] = '\0';
}