#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct PROFILE{
    int no;
    char name[20];
};  //PROFILE型の構造体


int main (void){
    struct PROFILE *p;

    p = (struct PROFILE *)malloc(sizeof(struct PROFILE));
    if(p == NULL){
        printf("動的確保に失敗\n");
        exit(EXIT_FAILURE);
    }
    printf("出席番号：");
    scanf("%d", &p -> no);
    printf("名前：");
    scanf("%s", p -> name);

    printf("出席番号： %d\n", p -> no);
    printf("名前: %s\n", p -> name);

    return 0;
}