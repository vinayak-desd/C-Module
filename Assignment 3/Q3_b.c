#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the number : ");
    scanf("%d", &a);

    c = 0;
    while (a > 0)
    {
        b = a % 10;
        a = a / 10;
        c = (c * 10) + b;
    }

    printf("The number in reverse order is %d\n", c);

	return 0;
}
