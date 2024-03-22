#include <stdio.h>

void prime(int, int);
int main()
{
    int a, b;
    printf("Enter the range : ");
    scanf("%d%d", &a, &b);
    printf("The prime numbers from %d to %d are", a, b);
    prime(a, b);
	return 0;
}
void prime(int n, int m)
{
    for (int i = n; i != m; i++)
    {
        int k;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                k = 0;
                break;
            }
            else
            {
                k = 1;
            }
        }
        if (k)
        {
            printf(" %d", i);
            ++n;
        }
    }
	printf("\n");
}
