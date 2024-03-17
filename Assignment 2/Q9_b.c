#include <stdio.h>

int main()
{
	int mm, yy,ydays = 365,mdays = 31;
	printf("Enter the number of Month : ");
	scanf("%d", &mm);
	printf("Enter the number of Year : ");
	scanf("%d", &yy);

	if(mm == 2)
		mdays = 28;

	if (((yy % 4) == 0 && (yy % 100) != 0) || ((yy % 400) == 0))
	{
		ydays =366;
		if(mm == 2)
			mdays = 29;

	}

	if(mm == 4 || mm == 6 || mm == 9 || mm == 11)
		mdays = 30;

	printf("The number of days in %dth month of %d year is %d\n And the number of days in %d year is %d.\n", mm,yy,mdays,yy,ydays);

}
