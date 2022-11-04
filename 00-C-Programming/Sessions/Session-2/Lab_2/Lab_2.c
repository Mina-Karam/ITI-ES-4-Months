#include <stdio.h>

int main()
{
	int pass, i = 0;

	printf("Please Enter your Pass: ");
	scanf("%d", &pass);

	while ((pass != 123) && (i<3))
	{
		printf("Error! Try Again\n");
		printf("Please Enter your Pass: ");
		scanf("%d", &pass);
		i++;
	}
	if(pass != 123)
	{
		printf("You are blocked\n");
	}
	else
	{
		printf("Done\n");
	}

	return 0;
}