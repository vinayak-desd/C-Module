#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,guess,chance=10;

	printf(" -- Guess the magic number in 10 chance-- \n");
	guess = rand() %100 +1;
	for(int i= 0; i<10;i++)
	{
		--chance;
		printf("Enter the number :  ");
		scanf("%d",&num);
		if(num == guess)
		{
			printf("*** Right ***\n");
			break;
		}
		else
		{
			printf("*** Left ***\nChance = %d\n",chance);
			continue;
		}
	}
	if((num != guess) && (chance == 0))
		printf("The number is %d\n",guess);
	return 0;
}
