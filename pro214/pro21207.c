#include <stdio.h>
#include <string.h>

int main (void){
    char str[4][10];
    int i;

    for ( i = 0; i < 4; i++){
        printf("文字列%d = ", i + 1);
        scanf("%s", str[i]);
    }
    for ( i = 0; i < 4; i++){
        printf("文字列%d = %s\n", i + 1, str[i]);
    }

    return 0;
}