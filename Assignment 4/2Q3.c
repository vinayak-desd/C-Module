#include <stdio.h>

int GCD(int, int );
int main()
{
    int a, b;
    printf("Enter the two numbers : ");
    scanf("%d%d", &a, &b);
    printf("The GCD of %d & %d is ",a,b);
    GCD(a, b);
	printf("\n");
    return 0;
}
int GCD(int n, int m)
{
    int c = n % m;
    if (c == 0)
    {
        printf("%d", m);
    }
    else
    {
        n = m;
        m = c;
        GCD(n, m);
    }
}
