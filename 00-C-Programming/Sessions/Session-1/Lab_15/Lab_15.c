#include <stdio.h>

int main()
{
	char ch, sum = 0;

	printf("Enter Number: ");
	scanf("%d", &ch);

	for (; ch > 0; ch /= 2)
	{
		if ((ch % 2) == 1)
		{
			sum += 1;
		}
	}
	
	printf("Sum = %d", sum);
	return 0;
}
