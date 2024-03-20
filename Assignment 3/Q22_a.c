#include <stdio.h>
int main()
{
    int i, j, a;
    a = 0;
    for (i = 1; a < 5; i++)
    {

        for (j = 0; j <= a; j++)
        {
            printf("*");
        }
        printf("\n");
        ++a;
    }
}
