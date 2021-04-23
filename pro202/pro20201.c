#include <stdio.h>

int main (void){
    int i;
    int a[10];
    char b[10];

    printf("sizeof(char)    = %d\n",sizeof(char));
    printf("sizeof(float)   = %d\n",sizeof(float));
    printf("sizeof(i)       = %d\n",sizeof(i));
    printf("sizeof(a)       = %d\n",sizeof(a));
    printf("sizeof(b)       = %d\n",sizeof(b));
    printf("sizeof(abc)       = %d\n",sizeof("abc\0de"));

    return 0;
}