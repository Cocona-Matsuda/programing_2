#include <stdio.h>

int main (void){
    char str[100];
    int no;
    int i;

    printf("文字列：");
    scanf("%s", str);

    printf("回数：");
    scanf("%d", &no);

    for ( i = 0; i < no; i++){
        printf("%s\n", str);
    }

    return 0;
}