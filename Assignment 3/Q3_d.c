#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the number : ");
    scanf("%d", &a); 
    d = a;
    c = 0;
    while (a > 0)
    {
        b = a % 10; 
        a = a / 10;
        c = c + (b * b * b);
    }

    if (d == c)
    {
        printf("Given number is Armstrong Number !!\n");
    }
    else
    {
        printf("Given number is not Armstrong Number !!\n");
    }
    return 0;
}
