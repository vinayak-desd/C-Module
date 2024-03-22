#include <stdio.h>
int pascal(int );
int main()
{
	int a;
	printf("Enter the number of rows : ");
	scanf("%d", &a);
	printf("The Pascal's Triangle of %d number of rows is \n",a);
	pascal(a);
}
int pascal(int n)
{
	int a, c;
	a = n; //no of rows
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j < (a - i); j++)
		{
			printf("  "); //space
		}
		for (int k = 1; k <= i; k++)
		{
			if (i == 1 || k == 1)
			{
				c = 1;
			}
			else
			{
				c = c * (i - k + 1) / (k - 1); //formula
			}
			printf("%5d", c); //values
		}
		printf("\n");
	}
	return 0;
}
