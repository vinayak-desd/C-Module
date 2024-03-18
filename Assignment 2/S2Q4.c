#include <stdio.h>

int main(void)
{
	int dd,mm,yy,day;
	printf("Enter the date dd mm yyyy : ");
	scanf("%d %d %d",&dd,&mm,&yy);

	day = (dd + (13*(mm+1)/5) + (yy%100)+ ((yy%100)/4)+((yy/100)+4)+5*(yy/100)) % 7;
	switch(day)
	{
		case 6:
			printf("The day on %d/%d/%d is Sunday\n",dd,mm,yy);
			break;
		case 0:
			printf("The day on %d/%d/%d is Monday\n",dd,mm,yy);
			break;
		case 1:
			printf("The day on %d/%d/%d is Tuesday\n",dd,mm,yy);
			break;
		case 2:
			printf("The day on %d/%d/%d is Wednsday\n",dd,mm,yy);
			break;
		case 3:
			printf("The day on %d/%d/%d is Thursday\n",dd,mm,yy);
			break;
		case 4:
			printf("The day on %d/%d/%d is Friday\n",dd,mm,yy);
			break;
		case 5:
			printf("The day on %d/%d/%d is Saturday\n",dd,mm,yy);
			break;
	}

	return 0;
}
