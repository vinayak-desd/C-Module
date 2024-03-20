#include <stdio.h>
int main()
{
    int i, j, a,b,c=1;
    a = 1;
    for (i = 1; a <= 5; i++)
    {
        b=5;

        for (j = 1; j<=c; j++)
        {
            printf("%d",b);
           --b;
        }
        printf("\n");
        ++a;
		++c;
    }
}
