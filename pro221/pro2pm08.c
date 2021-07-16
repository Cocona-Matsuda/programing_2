#include <stdio.h>
#include <string.h>

void input_data(int *year, int *month, int *day);
void next_day(int *year, int *month, int *day);

int main (void){
    int year;
    int month;
    int day;

    input_data(&year, &month, &day);
    next_day(&year, &month, &day);

    printf("次の日は%d年%d月%d日です．\n", year, month, day);

    return 0;
}
void input_data(int *year, int *month, int *day) {
    printf("年：");
    scanf("%d", &year);

    printf("月：");
    scanf("%d", &month);

    printf("日：");
    scanf("%d", &day);
}
void next_day(int *year, int *month, int *day){
    if (month == 12 && day == 31){
        year++;
        month = 1;
        day = 1;
    }

    switch (month){
    case 1:
        if(day == 31){
            month++;
        };
        break;
    case 2:
        if(day == 28){
            month++;
        };
    default:
        break;
    }
}