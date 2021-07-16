#include <stdio.h>
#include <string.h>

char func(char str);

int main (void){
    char str[100];

    printf("入力");
    scanf("%s", str);

    func(str);

    return 0;
}
char func(char str){
    char string[100];
    int i = 0;
    int len;

    for(len = 0; str[len] != '\0'; len++){
        if(str[len] >= "a" && str[len] <= "z" || str[len] >= "A" && str[len] <= "Z" || str[len] >= 0 && str[len] <= 9){
            string[i] = str[len];
        }
    }
}