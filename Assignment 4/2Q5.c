#include <stdio.h>

int binary(int);

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("The the binary representation of %d is ", a);
    binary(a);
	printf("\n");
    return 0;
}
int binary(int n)
{
    if (n > 1)
        binary(n / 2);
    printf("%d", n % 2);
}
