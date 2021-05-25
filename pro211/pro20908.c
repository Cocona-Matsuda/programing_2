#include <stdio.h>
#include <string.h>

int seisuu(char s[]);
int suuji(char s[]);

int main (void){
    char str1[100];
    char str2[100];
    int goukei;

    while(1){
        printf("文字列１：");
        scanf("%s", str1);
        if (suuji(str1) == 1){
            break;
        }
    }
    while (1){
        printf("文字列２：");
        scanf("%s", str2);
        if (suuji(str2) == 1){
            break;
        }
    }
    goukei = seisuu(str1) + seisuu(str2);

    printf("%s + %s = %d\n", str1, str2, goukei);

    return 0;
}
int seisuu(char s[]) {
    int i = 0, r = 0;

    while (s[i] != '\0') {
        r *= 10;
        r += s[i] - '0';
        i++;
    }
    return r;
}
int suuji(char s[]){
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] < '\0' || s[i] > '9'){
            return 0;
        }
        i++;
    }
    return 1;
}