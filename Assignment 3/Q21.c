#include <stdio.h>

int main()
{
    int i, j, a, b, n = 0;
    printf("Enter the number : ");
    scanf("%d", &b);
    printf("Prime numbers from %d are \n", b);
    for (i = b; n != 5; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                a = 0;
                break;
            }
            else
            {
                a = 1;
            }
        }
        if (a)
        {
            printf("%d\n", i);
            ++n;
        }
    }
}
