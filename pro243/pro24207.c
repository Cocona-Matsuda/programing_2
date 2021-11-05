#include <stdio.h>

int main(void)
{
	char m[5][10];
	char (*p)[10];
	int i;
	
	for (i = 0; i < 5; i++){
		printf("文章%d>> ", i + 1);
		scanf("%s", p[i]);
	}
	
	for (i = 0; i < 5; i++){
		printf("文章%d : %s\n", i + 1, p[i]);
	}
	
	return (0);
}
