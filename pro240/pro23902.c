#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 20

int main (void){
    char (*p) [MAX_LEN];
    int n, i;
    
    printf("文字列数：");
    scanf("%d", &n);

    p = (char (*)[MAX_LEN])malloc(sizeof(char));
    
    if (p == NULL){
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < n; i++){
        printf("文字列%d:", i);
        scanf("%s", p[i]);
    }
    for (i = 0; i < n; i++){
        printf("文字列%d: %s\n", i, p[i]);
    }
    
    
    return 0;
}