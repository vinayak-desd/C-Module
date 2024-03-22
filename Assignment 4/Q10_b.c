#include <stdio.h>

void days(int,int);

int main(void)
{
	int mm, yy;
	printf("Enter the number of Month : ");
	scanf("%d", &mm);
	printf("Enter the number of Year : ");
	scanf("%d", &yy);
	days(mm,yy);
	return 0;
}
void days(int a ,int b)
{
	int mdays = 31,ydays = 365;
	if(a == 2)
		mdays = 28;

	if (((b % 4) == 0 && (b % 100) != 0) || ((b % 400) == 0))
	{
		ydays =366;
		if(a == 2)
			mdays = 29;

	}

	if(a == 4 || a == 6 || a == 9 || a == 11)
		mdays = 30;

	printf("The number of days in %dth month of %d year is %d\n And the number of days in %d year is %d.\n", a,b,mdays,b,ydays);
}
