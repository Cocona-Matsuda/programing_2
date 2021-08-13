#include <stdio.h>
#include <string.h>

void input_data(float *m);
float sum_data(float *m);

int main (void){
    float a[3];
    float sum;

    input_data(a);
    sum = sum_data(a);

    pritf("合計= %f", sum);

    return 0;
}
void input_data(float *m){
    int i;
    for(i = 0; i < 3; i++){
        printf("m[%d]>>", i);
        scanf("%f", &m[i]);
    }
}
float sum_data(float *m){
    float s = 0;
    int i;
    for(i = 0;i < 3; i++){
        s += m[i];
    }
}