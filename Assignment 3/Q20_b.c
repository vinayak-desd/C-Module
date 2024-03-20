#include <stdio.h>

int main()
{
	int i, b, c = 0, d, n = 0, j;
	printf("The armstrong number from 1 to 500 is \n");

	for (i = 0; i <= 500; i++)
	{
		c = 0;
		d = i;

		while (d > 0)
		{
			b = d % 10; 
			d = d / 10;
			c = c + (b * b * b);
		}	
		if(c==i)
			printf("%d\n",i);
	}
	return 0;
}
