#include <stdio.h>
int a, b;
int main()
{
    printf("Enter the Numbers\n");
    scanf("%d%d", &a, &b);

    printf("\nEntered numbers are %d,%d", a, b);

    printf("\nSum of numbers = %d", (a + b));

    printf("\nDiff of numbers = %d", (a - b));
    printf("\nProduct of numbers = %d", (a * b));
}
