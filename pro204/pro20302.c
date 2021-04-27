#include <stdio.h>

int main (void){
    char str[100];
    int no;
    int i = 0;

    printf("文字列：");
    scanf("%s",str);

    printf("回数：");
    scanf("%d",&no);

    for ( 0 <= no; no--;){
        while (str[i] != '0'){
            printf("%c",str[i]);
            i++;
        }
        printf("\n");
        i = 0;
    }

    return 0;
}
