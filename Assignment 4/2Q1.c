#include <stdio.h>

int fact(int , int );
int main()
{
    int a, b;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("The factorial of %d is ", a);
    fact(a, a);
	printf("\n");
    return 0;
}
int fact(int n, int m)
{
    m = m - 1;

    if (m == 0)
    {
        printf("%d", n);
    }
    else
    {
        n = n * m;
        fact(n, m);
    }
}
