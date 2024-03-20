#include <stdio.h>
int main()
{
    int a, b, c, e;
    do
    {
        printf("\n1.Adition\n2.Subtraction\n3.Multiplicatiom\n4.Division\n5.Exit\n : ");
        scanf("%d", &e);
        switch (e)
        {
        case 1:
            printf("Enter two numbers : ");
            scanf("%d%d", &a, &b);
            c = a + b;
            printf("The addition of %d & %d is %d", a, b, c);
            break;
        case 2:
            printf("Enter two numbers : ");
            scanf("%d%d", &a, &b);
            c = a - b;
            printf("The Subtraction of %d & %d is %d", a, b, c);
            break;
        case 3:
            printf("Enter two numbers : ");
            scanf("%d%d", &a, &b);
            c = a * b;
            printf("The multiplication of %d & %d is %d", a, b, c);
            break;
        case 4:
            printf("Enter two numbers : ");
            scanf("%d%d", &a, &b);
            if (a > 0 && b > 0)
            {
                c = a / b;    
                printf("The division of %d by %d is %.3f", a, b, c);
            }
            else
            {
                printf("Division of Zero is Not possible !!");
            }
            break;
        case 5:
            break;
        }

    } while (e != 5);

	return 0;
}
