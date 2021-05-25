#include <stdio.h>
#include <string.h>

void hyouji(char mojiretu[]);

int main (void){
    char str[100];

    printf("文字列：");
    scanf("%s", str);

    hyouji(str);

    return 0;
}
void hyouji(char mojiretsu[]){
    printf("%s", mojiretsu);
}