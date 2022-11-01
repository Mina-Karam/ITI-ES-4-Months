#include <stdio.h>

int main()
{
	int num;

	printf("Enter Number: ");
	scanf("%d", &num);
	num %= 2;
	switch (num)
	{
		int y = 10;
		case 0:
			printf("Even %d", y);
			break;

		case 1:
			printf("Odd");
			break;
	}


	return 0;
}