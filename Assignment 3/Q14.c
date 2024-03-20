#include <stdio.h>
int main()
{
    int a, i, b;
    printf("Enter the number : ");
    scanf("%d", &a);
    for (i = 2; i < a; i++)
    {
        b = a % i;
        if (b == 0)
        {
            printf("%d is not a prime number\n", a);
            break;
        }
        else
        {
            continue;
        }
    }
    if(b!=0)
    {
        printf("%d is a prime number\n",a);
    }
}
