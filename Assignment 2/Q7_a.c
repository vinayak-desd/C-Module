#include <stdio.h>

int main()
{
	int a, b, c, d;
	printf("Enthe the year : ");
	scanf("%d", &a);

	b = a % 4;
	c = a % 100;
	d = a % 400;

	if (b == 0)
	{
		if (c == 0)
		{
			if (d == 0)
			{
				printf("It is a leap year and number of days is 366\n");
			}
			else
			{
				printf("It is not a leap year and number of days is 365\n");
			}
		}
		else
		{
			printf("It is a leap year and number of days is 366\n");
		}
	}
	else
	{
		printf("It is not a leap year and number of days is 365\n");
	}

	return 0;
}
