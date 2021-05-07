#include <stdio.h>

#include <string.h>

int main (void){
    char s1[] = "ABCd";
    char s2[] = "ABC";
    int n1;
    int n2;

    n1 = strcmp(s1, s2);
    n2 = strncmp(s1 , s2, 3);

    printf("n1: %d  n2:%d\n", n1, n2);

    return 0;
}