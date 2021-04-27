#include <stdio.h>

int main(void)
{
	char str[100];
	int i;
	int no;
	int j;

	printf("文字列= ");
	scanf("%s", str);

	printf("回数= ");
	scanf("%d", &no);

	for (j = 0; j < no; j++){
		i = 0;
		while (str[i] != '\0'){
			printf("%c", str[i]);
			i++;
		}
		printf("\n");
	}

	return (0);
}