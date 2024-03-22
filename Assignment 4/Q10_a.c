#include <stdio.h>

int check(int);
int main()
{
    int yy;
    printf("Enter the year : ");
    scanf("%d", &yy);
    check(yy);
    return 0;
}
int check(int n)
{
    int b = n % 4, c = n % 100, d = n % 400;
    int e = (b == 0 && c != 0) || (d == 0) ? 1 : 0;

    if (e)
    {
        printf("It a leap year \n");
    }
    else
    {
        printf("It is not a leap year \n");
    }
}
