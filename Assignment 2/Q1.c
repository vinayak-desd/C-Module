#include<stdio.h>

int main()
{
	int a,b;
	double c;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("The two numbers are %d, %d\n",a,b);

	if(b==0)
	{
		printf("Divide by zero is not possible !!\n");
	}
	else
	{
		c = a/b;
		printf("The division is %.3f\n",c);
	}

	return 0;
}
