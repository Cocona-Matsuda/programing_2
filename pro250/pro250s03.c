#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    char buf[64];

    if((fp = fopen("pro250s03.txt", "r")) == NULL)exit(1);

    fgets(buf, sizeof(buf), fp);
    printf("%s", buf);

    fclose(fp);

    return 0;
}