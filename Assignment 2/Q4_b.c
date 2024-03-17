#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the two numbers :");
    scanf("%d%d", &a, &b);

    c = a > b ? a : b;
    if (c == a)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else
    {
        printf("%d is greater than %d\n", b, a);
    }
    return 0;
}
