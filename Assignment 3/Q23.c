#include <stdio.h>
int main()
{
    int a, c;
    a = 5; //no of rows
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < (a - i); j++)
        {
            printf("  "); //space
        }
        for (int k = 1; k <= i; k++)
        {
            if (i == 1 || k == 1)
            {
                c = 1;
            }
            else
            {
                c = c * (i - k + 1) / (k - 1);//formula 
            }
            printf("%4d", c); //values
        }
        printf("\n");
    }
    return 0;
}
