#include <stdio.h>

int main()
{
	char num, i, r, newNum;

	printf("Enter Number: ");
	scanf("%d", &num);

	for (; num > 0;)
	{
		r = num % 10;
		newNum = r;
		newNum += newNum * 10;
		num /= 10; 
	}
	
	printf("New Number = %d", newNum);
	return 0;
}
