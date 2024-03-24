#include <stdio.h>

int hexa(int);

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("The the Hexadecimal representation of %d is ", a);
    hexa(a);
	printf("\n");
    return 0;
}
int hexa(int n)
{
    if (n > 1)
        hexa(n / 16);
    int a = n % 16;
    switch (a)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        printf("%d", a);
        break;
    case 10:
        printf("%c", 'A');
        break;
    case 11:
        printf("%c", 'B');
        break;
    case 12:
        printf("%c", 'C');
        break;
    case 13:
        printf("%c", 'D');
        break;
    case 14:
        printf("%c", 'E');
    case 15:
        printf("%c", 'F');
        break;
    }
}
