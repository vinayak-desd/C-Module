#include <stdio.h>

int main()
{
    int i, j, a, b;
    printf("Enter the numbers : ");
    scanf("%d%d", &i, &a);
    printf("The tables from %d to %d is\n", i, a);
    for (i; i <= a; i++)
    {
        printf("Table of %d\n", i);
        for (j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n",i,j, i * j);
        }
    }
	return 0;
}
