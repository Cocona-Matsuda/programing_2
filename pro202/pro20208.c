#include <stdio.h>

int main (void){
    char str[100];
    int i = 0;
    int n = 0;

    printf("文字列:");
    scanf("%s", str);


    while (str[i] != '\0'){
        if ((str[i] >='0') && (str[i] <= '9')){
            n++;
        }
        i++;
    }
    printf("%d\n", n);

    return 0;
}