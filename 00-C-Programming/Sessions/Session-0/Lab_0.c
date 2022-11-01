#include <stdio.h>

int main()
{
	int num1, num2;

	printf("Enter Number 1 & number 2: ");
	scanf("%d %d");
	
	printf("%d\n",num1 & num2);
	printf("%d\n",num1 | num2);
	printf("%d\n",num1 ^ num2);
	printf("%d\n",~num1);

	return 0;
}