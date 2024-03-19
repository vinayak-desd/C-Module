#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the number : ");
    scanf("%d", &a);
    c = a;

    while (a/2 > 0)
    {
        
        b = 0;
        while (b<=c/2)
        {
            d = a * b;
            if (d == c)
            {
                printf("\n%d,%d",a,b);
            }
            ++b;
        }
        a--;
    }
    return 0;
}
