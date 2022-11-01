#include <stdio.h>

int main()
{
	int num1, shift;

	printf("Enter Number & shift Value: ");
	scanf("%d %d");
	
	printf("%d\n",num1 >> shift);
	printf("%d\n",num1 << shift);

	return 0;
}