#include <stdio.h>

int power(int , int , int );
int main()
{
    int a, b, c;
    printf("Enter the Base and Indesx : ");
    scanf("%d%d", &a, &b);
    printf("%d to the power of %d is ", b, a);
    c = a;

    power(a, b, c);
	printf("\n");
    return 0;
}
int power(int n, int m, int l)
{
    m--;
    if (m == 0)
    {
        printf("%d", n);
    }
    else
    {
        n = n * l;

        power(n, m, l);
    }
}
