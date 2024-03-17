#include <stdio.h>

int main()
{
	int mm, yy,mdays = 31,ydays = 365;
	printf("Enter the number of Month : ");
	scanf("%d", &mm);
	printf("\nEnter the number of Year : ");
	scanf("%d", &yy);

	int c,d,e;
	c = yy % 4;
	d = yy % 100;
	e = yy % 400;
	
	if(mm == 2)
		mdays = 28;

	if (c == 0)
	{
		if (d == 0)
		{
			if (e == 0)
			{
				ydays = 366;
				if(mm == 2);
				mdays = 29;
			}
		}
		else
		{
			ydays = 366;
			if(mm == 2);
			mdays = 29;
		}
	}

	if(mm == 4)
		mdays = 30;
	if(mm == 6)
		mdays = 30;
	if(mm == 9)
		mdays = 30;
	if(mm == 11)
		mdays = 30;

	printf("The number of days in %dth month of %d year is %d\n And the number of days in %d year is %d\n.",mm,yy,mdays,yy,ydays);

	return 0;
}
