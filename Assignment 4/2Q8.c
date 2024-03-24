#include <stdio.h>

void swap(int *,int*);

int main(void)
{
	int num1 = 20,num2 = 60;
	printf("Before swapping num1 = %d, num2 = %d\n",num1,num2);
	swap(&num1,&num2);
	printf("After swapping num1 = %d, num2 = %d\n",num1,num2);

	return 0;
}
void swap(int *a,int *b)
{
	int temp =*a;
	*a = *b;
	*b = temp;
}
