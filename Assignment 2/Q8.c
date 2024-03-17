#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the Quantity : ");
    scanf("%d", &a);

    if (a > 30)
    {
        if (a > 50)
        {
            b = a * 5;
            c = 0.15 * b;
            d = b - c;
            printf("The price for %d quantity is %d with 15%% discount\n", a, d);
        }
        else
        {
            b = a * 5;
            c = 0.1 * b;
            d = b - c;
            printf("The price  for %d quantity is %d with 10%% discount\n", a, d);
        }
    }
    else
    {
        b = a * 5;
        printf("The price for %d quantity is %d\n", a, b);
    }
    return 0;
}
