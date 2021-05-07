#include <stdio.h>
#include <string.h>

int main (void){
    char s1[10] = "ABCD";
    char s2[] = "abcd";
    char s3[11];

    strcat(s1, s2);
    strcpy(s3, s1);
    strncat(s3, s1, 2);
    printf("s1:%s   s3:%s\n", s1, s3);

    return 0;
}