#include <stdio.h>
#include <string.h>

int main (void){
    char str[5] = "tama";
    char cp[5];
    char cpn[5];

    strcpy(cp,str);
    strncpy(cpn,str,2);

    cpn[2] = '\0';
    printf("cp: %s  cpn:%s\n", cp, cpn);

    return 0;
}