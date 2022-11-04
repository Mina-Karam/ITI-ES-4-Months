#include <stdio.h>

int main()
{
	int x, i = 0;

	printf("3 * 4 = ");
	scanf("%d", &x);

	while ((x != 12) && (i<5))
	{
		i++;
		printf("Try Again");
		scanf("%d", &x);
	}
	if(x != 12)
	{
		printf("you are blocked");
	}
	else
	{
		printf("Done");
	}

	return 0;
}