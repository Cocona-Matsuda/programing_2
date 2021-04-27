#include <stdio.h>

int main (void){
    char str[100];
    int n[10];
    int i;

    printf("文字列：");
    scanf("%s",str);

    for ( i = 0; i < 10; i++)
    {
        n[i] = 0;
    }
    i = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9'){
            n[str[i] - '0']++;
        }
        i++;
    }
    printf("数字の出現回数\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d:%d\n", i, n[i]);
    }


    return 0;
}