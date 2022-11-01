#include <stdio.h>

int main()
{
	int c;

	printf("Enter c: ");
	
	switch(scanf("%d", &c))
	{
		case 1: printf("Number"); break;
		default: printf("Charater"); break;
	}

	return 0;
}