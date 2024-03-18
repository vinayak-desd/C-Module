#include <stdio.h>

int main(void)
{
	char ch;
	printf("Enter the Charecter : ");
	scanf(" %c",&ch);


	if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		printf("%c is a Alphabet Letter\n",ch);
	if(ch >= 65 && ch <= 90)
		printf("%c is a Uppercase Letter\n",ch);
	else if(ch >= 97 && ch <= 1220)
		printf("%c is a Lowercase Letter\n",ch);
	else if(ch >= 48  && ch <= 57)
		printf("%c is a Digit\n",ch);
	else if(ch == 32 || ch == 9 || ch == 13 || ch == 10)
		printf("%c is a Space \n",ch);
	else
		printf("Other \n");

	return 0;
}
