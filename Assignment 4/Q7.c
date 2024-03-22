#include <stdio.h>
int fibonacci(int);
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("The fibonacci series of %dth terms is ",a);
    fibonacci(a);
    return 0;

}
int fibonacci(int n)
{
    int b=0;
    int d=1;
    for (int i = 0; i < n; i++)
    {
        int c = b + d;
        b=d;
        printf("%2d",b);
        d=c;
    }
	printf("\n");
}
