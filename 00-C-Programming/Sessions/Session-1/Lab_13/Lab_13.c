#include <stdio.h>

int main()
{
	int n, i;

	printf("Enter Number: ");
	scanf("%d", &n);

	for (i = n; i >= 0; i--)
	{
		printf("%d\n",i); 
	}	
	return 0;
}
