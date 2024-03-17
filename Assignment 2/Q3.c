#include<stdio.h>

int main()
{
    signed int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    if(a==0)
    {
        printf("The number is zero !\n"); 
    }
    else
    {
        if(a>0)
        {
            printf("The number is Positve !\n");
        }
        else
        {
            printf("The number is negative\n");
        }
    }
    return 0;
}
