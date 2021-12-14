#include<stdio.h>
#include<stdlib.h>

int main(void){
    char s1[6] = "hello";
    char s2[5];

    printf("s2>>");
    scanf("%s", s2);

    printf("s1: %s(%p)\n", s1, s1);
    printf("s2: %s(%p)\n", s2, s2);
    

    return 0;
}