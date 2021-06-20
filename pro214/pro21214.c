#include <stdio.h>
#include <string.h>

int main (void){
    char name[5][2][10];
    int i;
    int j;

    for ( i = 0; i < 5; i++){
        printf("姓%d：", i + 1);
        scanf("%s", name[i][0]);
        printf("名%d：", i + 1);
        scanf("%s", name[i][1]);
    }

    for ( i = 0; i < 5; i++){
        printf("%s %s \n", name[i][0], name[i][1]);
    }

    return 0;
}