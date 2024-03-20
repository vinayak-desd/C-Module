#include <stdio.h>
int main()
{
    int i, j, a,b;
    a = 1;
    for (i = 1; a <= 5; i++)
    {
        b=1;

        for (j = 1; b <= a; j++)
        {
            
            printf("%d",b);
            ++b;
        }
        printf("\n");
        ++a;
    }
}
