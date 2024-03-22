#include <stdio.h>
int factorial(int);
int main()
{
    int a, b, c, i;
    printf("Enter the number : ");
    scanf("%d", &a);
    c = factorial(a);
    printf("The factorial of %d is %d\n", a, c);
}

int factorial(int n)
{

    int b = n;
    for (int i = --n; i > 0; i--)
    {
        b = b * i;
    }
    return b;
}
