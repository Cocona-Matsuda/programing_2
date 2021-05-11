#include <stdio.h>
#include <string.h>

int hour(int n){
    return (n / 3600);
}

int minute(int n){
    int min = n * 100;
    min = min / 3600;
    min = min % 10;
    return (min);
}
int second(int n){
    return (n % 3660);
}

int main (void){
    int time;
    int h, m, s;

    printf("秒：");
    scanf("%d", &time);

    h = hour(time);
    m = minute(time);
    s = second(time);

    printf("%d秒は%d時間%d分%d秒\n", time, h, m, s);

    return 0;
}