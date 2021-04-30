#include <stdio.h>
#include <string.h>

int main (void){
    char str[5] = "tama";
    int n;

    n = strlen(str);
    printf("%sの文字列は%dです。",str ,n);


    return 0;
}