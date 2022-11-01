#include <stdio.h>

int main()
{
	int grade;

	printf("Enter number: ");
	scanf("%d", &grade);

	if(grade >= 0 && grade < 50)
	{
		printf("Fail\n");
	}
	else if (grade >= 50 && grade < 65)
	{
		printf("L\n");
	}
	else if (grade >= 65 && grade < 75)
	{
		printf("G\n");
	}
	else if (grade >= 75 && grade < 85)
	{
		printf("V.G\n");
	}
	else if (grade >= 85 && grade <= 100)
	{
		printf("F\n");
	}
	else
	{
		printf("Outside\n");
	}

	return 0;
}