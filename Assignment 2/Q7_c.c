#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enthe the year : ");
    scanf("%d", &a);
   
    b = a % 4;
    c = a % 100;
    d = a % 400;
    e =  (b==0 && c != 0) || (d == 0)  ? 1 : 0;

    if (e == 0)
    {
        printf("%d is not a leap year and number of days is 365\n",a);
    }
    else
    {
        printf("%d is a leap year and number of days is 366\n",a);
    }

    return 0;
}
