#include <stdio.h>

int main()
{
	int ch;

	printf("Enter character: ");
	scanf("%d", &ch);

	(ch%2 == 0) ? (printf("Even")) : (printf("Odd"));
	return 0;
}