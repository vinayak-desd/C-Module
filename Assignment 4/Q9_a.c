#include <stdio.h>
void prime(int);
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    prime(a);
	return 0;
}
void prime(int n)
{
    int b;
    for (int i = 2; i < n; i++)
    {
        b = n % i;
        if (b == 0)
        {
            printf("%d is not a prime number.\n", n);
            break;
        }
        else
        {
            continue;
        }
    }
    if (b != 0)
    {
        printf("%d is a prime number.\n", n);
    }
}
