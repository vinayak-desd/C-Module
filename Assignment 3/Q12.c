#include <stdio.h>
int main()
{
    int a, i, b, c;
    printf("Enter Base : ");
    scanf("%d", &a);
    printf("Enter Index : ");
    scanf("%d", &b);
    c=a;
    for (i = 1; i < b; i++)
    {
        c = c * a;
    }
    printf("%d to the power of %d is %d\n", b, a, c);
    return 0;
}
