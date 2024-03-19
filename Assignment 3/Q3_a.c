#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the number : ");
    scanf("%d", &a); //5684
    printf("The sum of digits of %d", a);
        c = 0;
    while (a > 0)
    {
        b = a % 10; //4
        a = a / 10;
        c = c + b;
    }

    printf(" is %d", c);
}
