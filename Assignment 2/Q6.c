#include <stdio.h>

int main()
{
	int a, rev, num, rem;

	printf("Enter the 5 digit number : ");
	scanf("%d", &a);

	if (a > 10000 && a < 99999)
	{

		num = a;
		rem = num % 10;       
		rev = rem;            
		num = num / 10;       
		rem = num % 10;       
		rev = rev * 10 + rem; 
		num = num / 10;       
		rem = num % 10;       
		rev = rev * 10 + rem; 
		num = num / 10;       
		rem = num % 10;       
		rev = rev * 10 + rem; 
		num = num / 10;       
		rem = num % 10;       
		rev = rev * 10 + rem; 

		if (a == rev)
		{
			printf("Given number is Numeric Palindrome !!\n");
		}
		else
		{
			printf("Given number is not Numeric Palindrome !!\n");
		}
	}
	else
	{
		printf("The number is invalid\n");
	}

	return 0;
}
