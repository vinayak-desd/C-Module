#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enthe the year : ");
    scanf("%d", &a);
    
    b = a % 4;
    c = a % 100;
    d = a % 400;

    if ((b == 0 && c != 0) || (d == 0))
    {
        printf("%d is leap year and the number of days is 366\n",a);
    }
    else
    {
        printf("%d is not a leap year and number of days is 365\n",a);
    }
}
