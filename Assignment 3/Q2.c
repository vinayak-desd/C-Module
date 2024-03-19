#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("The table of %d is\n", a);
    b = 1;

    while (b <= 10)
    {
        c = a * b;
        printf("%d * %d = %d\n", a, b, c);
        ++b;
    }
    return 0;
}
