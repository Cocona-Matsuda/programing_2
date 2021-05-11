#include <stdio.h>
#include <string.h>

int main (void){
    char name1[100];
    char name2[100];

    printf("名前１：");
    scanf("%s",name1);
    printf("名前２：");
    scanf("%s",name2);

    if (strncmp(name1, name2, 4) == 0){
        printf("よく似た名前です。\n");
    }else{
        printf("似ていない名前です。\n");
    }

    return 0;
}