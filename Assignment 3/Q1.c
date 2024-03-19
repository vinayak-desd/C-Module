#include<stdio.h>

int main()
{
    int a;
    char b;
    printf("Enter the charecter : ");
    scanf("%c",&b);
    printf("Enter the number : ");
    scanf("%d",&a);

    while (a>0)
    {
        printf("%c",b);
        --a;
    }
	printf("\n");
    return 0;
    
}
