#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the two numbers : ");
    scanf("%d%d", &a, &b);
    d = a;
    e = b;
    while (b > 0)
    {
        c = a % b;
		printf("%d %% %d = %d\n",a,b,c);
        a = b;
        b = c;
    }
    printf("The GCD of %d & %d is %d\n", d, e, a);
}
