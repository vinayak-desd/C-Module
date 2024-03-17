#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("\nThe number is %d\n", a);

    b = a % 2;

    if (b == 0)
    {
        printf("The number is Even !!\n");
    }
    else
    {
        printf("The number is odd !!\n");
    }

    return 0;
}
