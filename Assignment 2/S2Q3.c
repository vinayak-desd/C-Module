#include <stdio.h>

int main(void)
{
	int ID,Dept;
	char Desi;
	printf("Enter the Employee ID Department_No Designation : ");
	scanf("%d %d %c",&ID,&Dept,&Desi);

	switch(Dept)
	{
		case 10:
			printf("The employee with ID no.%d is Working in Marketing as",ID);
			break;
		case 20:
			printf("The employee with ID no.%d is Working in Management as",ID);
			break;
		case 30:
			printf("The employee with ID no.%d is Working in Sales as",ID);
			break;
		case 40:
			printf("The employee with ID no.%d is Working in Designing as",ID);
			break;
	}

	switch(Desi)
	{
		case 'M':
			printf(" Manager\n");
			break;
		case 'S':
			printf(" Supervisor\n");
			break;
		case 's':
			printf(" Security Officer\n");
			break;
		case 'C':
			printf(" Clerk\n");
			break;
	}

}
