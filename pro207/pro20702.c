#include <stdio.h>
#include <string.h>

int main (void){
    char name[100];
    char name2[100];
    char ans[] ="masaki";
    int i;

    printf("名前：");
    scanf("%s",name);

    strcpy(name2, name);
    i = 0;
    while(name[i] != '\0'){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i] + ('a' - 'A');
        }
        i++;
    }
    if (strcmp(name, ans) == 0){
        printf("あなたは%sです\n",name2);
    }else{
        printf("あなたは違う人です。\n");
    }

    return 0;
}