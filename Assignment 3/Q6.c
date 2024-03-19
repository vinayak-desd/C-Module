#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("The factors of %d is ", a);
    b = 0;

    while (b != a)
    {
        ++b;
        if ((a%b)==0)
        {
            d=a/b;
            printf("%d,", d);
        }
        
        
    }
    return 0;
}