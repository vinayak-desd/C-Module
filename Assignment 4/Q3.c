#include <stdio.h>

int add(int n, int m)
{
	int b = n + m;
	return b;
}
int sub(int n, int m)
{
	int b = n - m;
	return b;
}
int mul(int n, int m)
{
	int b = n * m;
	return b;
}
int div(int n, int m)
{
	int b = n / m;
	return b;
}
int main()
{
	int a, b, c, e;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n : ");
	scanf("%d", &e);
	if (e != 1 && e != 2 && e != 3 && e != 4)
		printf("Invalid Choice !!\n");
	else
	{
	printf("Enter the numbers : ");
	scanf("%d%d", &a, &b);
	}
	switch (e)
	{
		case 1:
			c = add(a, b);
			break;
		case 2:
			c = sub(a, b);
			break;
		case 3:
			c = mul(a, b);
			break;
		case 4:
			if (a == 0 || b == 0)
			{
				printf("Divide by zero not possible !!\n");
				c = 0;
				break;
			}
			c = div(a, b);
			break;
	}
	printf("Result = %d\n", c);
	return 0;

}
