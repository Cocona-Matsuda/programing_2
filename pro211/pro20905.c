#include <stdio.h>
#include <string.h>

void printn(char str[], int kaisuu);

int main (void){
    char str[100];
    int kaisuu;

    printf("文字列：");
    scanf("%s", str);

    printf("回数：");
    scanf("%d", &kaisuu);

    printn(str, kaisuu);
    return 0;
}
void printn(char str[], int kaisuu){
    int i;

    for ( i = 0; i < kaisuu; i++){
        printf("%s\n", str);
    }

}