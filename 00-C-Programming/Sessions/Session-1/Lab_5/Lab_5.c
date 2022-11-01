#include <stdio.h>

int main()
{
	int c;

	printf("Enter c: ");
	if(scanf("%d", &c))
	{
		printf("Number");
	}
	else
	{
		printf("Charater");
	}

	return 0;
}