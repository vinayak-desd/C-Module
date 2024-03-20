#include <stdio.h>
int main()
{
	int a, i, b,c,d;
	printf("Enter the number : ");
	scanf("%d", &a);
	printf("The Fibonacci series of first %dth term is ", a);
	switch(a)
	{
		case 1:
			printf("1 ");
			break;
		case 2:
			printf("1 1 ");
			break;
		default :
			printf("1 1");
			a = a-2;
			b=1;
			d=1;
			for (i = 0; i < a; i++)
			{
				c = b + d;

					printf(" %d",c);

				b=d;
				d=c;
			}
			break;
	}
	printf("\n");
	return 0;
}
