#include <stdio.h>

int main()
{
	int num1, num2;

	printf("Enter number 1: ");
	scanf("%d", &num1);

	printf("Enter number 2: ");
	scanf("%d", &num2);

	if(num1 > num2)
	{
		printf("Max number: %d", num1);
	}
	else
	{
		printf("Max number: %d", num2);
	}
	return 0;
}