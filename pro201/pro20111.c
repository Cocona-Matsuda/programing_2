#include <stdio.h>

int main (void){
    int x;
    int y;
    int i = 0;

    for ( y = 0; y < 3; y++){
        for ( x = 0; x < 3; x++){
            printf("%d",i);
            i++;
        }
        printf("\n");
        x = 0;
    }

    return 0;
}