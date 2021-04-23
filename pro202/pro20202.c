#include <stdio.h>

int main (void){
    char str[20];
    int n;
    int i;

    printf("文字列：");
    scanf("%s", str);

    printf("表示回数:");
    scanf("%d", &n);

    for ( i = 0; i < n; i++){
        printf("%s\n", str);
    }

    return 0;
}