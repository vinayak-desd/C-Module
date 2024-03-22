#include <stdio.h>
void print(char n, int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("%c", n);
    }
	printf("\n");
}
int main()
{
    int a;
    char b;
    printf("Enter charecter : ");
    scanf("%c", &b);
    printf("Enter the number : ");
    scanf("%d", &a);
    print(b, a);
    return 0;
}
