#include <stdio.h>

int main()
{
	int n, i, sum = 0;

	printf("Enter Number: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		sum += i; 
	}

	printf("Sum = %d", sum);
	
	return 0;
}
