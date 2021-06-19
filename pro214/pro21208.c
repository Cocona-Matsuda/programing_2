#include <stdio.h>
#include <string.h>

int main (void){
    char s[10];
    int i;
    int k;

    for ( k = 0; k < 3; k++){
        printf("文字列%d=", k + 1);
        scanf("%s", s[k]);
    }

    for ( k = 0; k < 3; k++){
        i = 0;
        while (s[i] != '\0') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= 'a' - 'A';
            }
            i++;
        }
        printf("%s\n", s);
    }

    return 0;
}