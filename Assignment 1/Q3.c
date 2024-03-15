#include <stdio.h>

int main()
{
	char V;
	int T;
	printf("Enter the Character which ascii value you want\n");
	scanf("%c", &V);
	printf("Entered character is %c\n", V);
	printf("Acscii value for %c in decimal is %d\n", V, V);
	printf("Acscii value for %c in hexal is %x\n", V, V);
	printf("Acscii value for %c in octal is %o\n", V, V);

	printf("Enter the ascii value for which you want Character\n");
	scanf("%d", &T);
	printf("The character for %d this ascii value is %c\n", T, T);
}
