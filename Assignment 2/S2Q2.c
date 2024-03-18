#include <stdio.h>

int main()
{
    int a, b, c, d;
    double e;
START:
    printf("Enter the number of function which you want to perform\n1.Additiom(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n5.Exit\n :");
    scanf("%d", &c);
    if (c == 1 || c == 2 || c == 3 || c == 4)
    {
        printf("Enter the numbers : ");
        scanf("%d%d", &a, &b);
    }

    switch (c)
    {
    case 1:
        d = a + b;
        printf("The addition of %d & %d is %d\n", a, b, d);
        goto START;
    case 2:
        d = a - b;
        printf("The Subtraction of %d & %d is %d\n", a, b, d);
        goto START;
    case 3:
        d = a * b;
        printf("The multiplication of %d & %d is %d\n", a, b, d);
        goto START;
    case 4:
        if (a == 0 || b == 0)
        {
            printf("Division by zero is not possible !!\n");
            goto START;
        }
        else
        {
            e = a / b;
            printf("The division of %d by %d is %.3f\n", a, b, e);
            goto START;
        }
    case 5:
        break;
    }
    return 0;
}
