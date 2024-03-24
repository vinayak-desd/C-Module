#include <stdio.h>

int calculator(int,char,int ,int*);

int main(void)
{
	int num1,num2,result;
	char opr;
	printf("Enter the operand 1, Operator ,Operand 2 : ");
	scanf("%d %c %d",&num1,&opr,&num2);
	int error = calculator(num1,opr,num2,&result);
	if(error)
		printf("%d %c %d = %d\n",num1,opr,num2,result);
	else
		printf("Error !!\n");

	return 0;
}

int calculator(int a,char op,int b,int *ans)
{
	int flag = 1;
	switch(op)
	{
		case '+':
			*ans = a + b;
			return flag;
		case '-':
			*ans = a - b;
			return flag;
		case '*':
			*ans = a * b;
			return flag;
		case '/':
			if(b == 0)
				flag = 0;
			else
				*ans = a / b;
			return flag;
		default :
			printf("Invalid Operator !!\n");
			break;
	}

}
