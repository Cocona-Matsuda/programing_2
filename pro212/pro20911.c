#include <stdio.h>
#include <string.h>

void SuujiInput(int i, char str[]);
int suuji(char s[]);
int seisuu(char s[]);
int StringPlus(char str1[], char str2[]);
int StringInputPlus(void);

int main(void) {
    int goukei;

    goukei = StringInputPlus();

    printf("合計： %d\n", goukei);

    return 0;
}
int StringInputPlus(void){
    char str1[100];
    char str2[100];

    SuujiInput(1, str1);
    SuujiInput(2, str2);

    return (StringPlus(str1,str2));
}
void SuujiInput(int i, char str[]) {
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
int StringPlus(char str1[], char str2[]){
    return (seisuu(str1) + seisuu(str2));
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