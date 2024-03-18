#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the number of Month : ");
    scanf("%d", &a);
    printf("Enter the number of Year : ");
    scanf("%d", &b);

    if (a < 1 || a > 12)
    {
        printf("\nPlease enter valid number of Month !!");
    }
    else
    {
        if (((b % 4) == 0 && (b % 100) != 0) || ((b % 400) == 0))
        {
            switch (a)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("\nThe number of days in %dth month of %d year is 31\nAnd the number of days in %d year is 366.", a, b, b);
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("\nThe number of days in %dth month of %d year is 30\nAnd the number of days in %d year is 366.", a, b, b);
                break;
            case 2:
                printf("\nThe number of days in %dth month of %d year is 29\nAnd the number of days in %d year is 366.", a, b, b);
                break;
            }
        }
        else
        {
            switch (a)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("\nThe number of days in %dth month of %d year is 31\nAnd the number of days in %d year is 365.", a, b, b);
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("\nThe number of days in %dth month of %d year is 30\nAnd the number of days in %d year is 365.", a, b, b);
                break;
            case 2:
                printf("\nThe number of days in %dth month of %d year is 28\nAnd the number of days in %d year is 365.", a, b, b);
                break;
            }
        }
    }
}
