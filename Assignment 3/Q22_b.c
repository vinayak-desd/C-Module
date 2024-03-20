#include <stdio.h>
int main()
{
    int i, j, a;
    a = 5;
    for (i = 1; a > 0; i++)
    {

        for (j = 0; j < a; j++)
        {
            printf("*");
        }
        printf("\n");
        --a;
    }
}
