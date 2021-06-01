#include <stdio.h>
#include <string.h>

void SuujiInput(int i, char str[]);
int suuji(char s[]);
int seisuu(char s[]);

int main(void) {
    char str1[100];
    char str2[100];
    int goukei;

    SuujiInput(1, str1);
    SuujiInput(2, str2);

    goukei = seisuu(str1) + seisuu(str2);

    printf("%s + %s = %d\n", str1, str2, goukei);

    return 0;
}
void SuujiInput(int i, char str[]){
    while (1) {
        printf("文字列%d：", i);
        scanf("%s", str);
        if (suuji(str) == 1) {
            break;
        }
    }
}
int suuji(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] < '\0' || s[i] > '9') {
            return 0;
        }
        i++;
    }
    return 1;
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