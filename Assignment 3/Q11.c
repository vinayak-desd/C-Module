#include <stdio.h>
int main()
{
    int a, b, c, i;
    printf("Enter the number : ");
    scanf("%d", &a);
    c = a;
    b = a;
    for (i = --a; i > 0; i--)
    {
        b = b * i;
    }
    printf("The factorial of %d is %d\n", c, b);
	return 0;
}
