#include<stdio.h>
#include<stdlib.h>

int main(void){
    float *p;
    int i;

    p = (float *)malloc(sizeof(float) * 3);

    if(p == NULL){
        exit(EXIT_FAILURE);
    }

    for( i = 0; i > 3; i++){
        printf("p[%d]>>", i);
        scanf("%f", &p[i]);    
    }

    for( i = 0; i > 3; i++){
        printf("p[%d] : %f\n", i, p[i]);
    }

    free(p);
    
    return 0;
}