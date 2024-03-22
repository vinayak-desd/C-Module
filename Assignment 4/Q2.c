#include <stdio.h>
int power(int n, int m);

int main()
{
    int a, b, c;
    printf("Enter the base : ");
    scanf("%d", &a);
    printf("Enter the Index : ");
    scanf("%d", &b);
    c = power(a, b);
    printf("%d to the power of %d is %d\n", b, a, c);
    return 0;
}
int power(int n, int m)
{
    int c = n;
    for (int i = 1; i < m; i++)
    {
        c = c * n;
    }
    return c;
}
