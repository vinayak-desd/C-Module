#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
		{
			printf("The Maximum number is %d\n", a);
		}
		else
		{
			printf("The maximum number is %d\n", c);
		}
	}
	else if (b > c)
	{
		printf("The Maximum number is %d\n", b);
	}
	else
	{
		printf("The Maximum number is %d\n", c);
	}

	return 0;
}
