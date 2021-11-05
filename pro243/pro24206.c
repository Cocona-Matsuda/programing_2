#include <stdio.h>

int main(void)
{
	char m[5][10];
	int i;
	
	for (i = 0; i < 5; i++){
		printf("文章%d>> ", i + 1);
		scanf("%s", m[i]);
	}
	
	for (i = 0; i < 5; i++){
		printf("文章%d : %s\n", i + 1, m[i]);
	}
	
	return (0);
}