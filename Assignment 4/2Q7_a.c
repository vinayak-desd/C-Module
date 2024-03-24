#include <stdio.h>

void calculate (int ,int,int*);

int res =0;

int main(void)
{
	int num1,num2,product;

	printf("Enter two nummbers : ");
	scanf("%d%d",&num1,&num2);
	calculate(num1,num2,&product);
	printf("The sum and product of %d and %d is %d, %d \n",num1,num2,res,product);

	return 0;
}
void calculate(int a,int b,int *mul)
{
	res = a + b;
	*mul = a*b;
}
