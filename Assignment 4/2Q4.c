#include <stdio.h>
//incomplete
int a;
int fibo(int, int , int);
int main()
{
    int a, b = 0, c = 1;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("The %dth term of fibonacci series is ", a);
    if (a == 1)
    {
        printf("0");
    }
    else
    {
        if (a == 2)
        {
            printf("1");
        }
        else
        {
            fibo(a, b, c);
        }
    }
	printf("\n");

    return 0;
}
int fibo(int m, int n, int o)
{
    if (m == 0)
    {
        printf("%d", a);
    }
    else
    {
        a = n + o;
        n = o;
        o = a;
        --m;
        fibo(m, n, o);
    }
}
