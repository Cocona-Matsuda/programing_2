#include <stdio.h>
#include <string.h>

float enzan(int kind, float a, float b);
float input_float(void);
int input_int(void);

int main (void){
    int kind;
    float a;
    float b;
    float result;

    a = input_float();
    b = input_float();
    kind = input_int();

    result = enzan(kind, a, b);

    printf("演算結果：%f", result);

    return 0;
}
float input_float(void){
    float n;

    printf("実数：");
    scanf("%f", &n);

    return n;
}
int input_int(void){
    int n = 10;

    while (n > 5) {
        printf("整数：");
        scanf("%d", &n);
    }
    return n;
}
float enzan(int kind, float a, float b){
    switch (kind){
    case 1:
        return (a + b);
        break;
    case 2:
        return (a - b);
        break;
    case 3:
        return (a * b);
        break;
    case 4:
        return (a / b);
        break;
    default:
        printf("error");
        break;
    }
}