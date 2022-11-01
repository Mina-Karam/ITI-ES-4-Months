#include <stdio.h>

int main()
{
	char c;

	printf("Enter c: ");
	scanf("%c", &c);

	switch(c)
	{
		case 'a': printf("V"); break;
		case 'e': printf("V"); break;
		case 'o': printf("V"); break;
		case 'u': printf("V"); break;
		case 'i': printf("V"); break;
		default: printf("N"); break;
	}

	return 0;
}