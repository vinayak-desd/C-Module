#include <stdio.h>

int a;
char ch;

int main()
{
    printf("Enter the number & Character");
    scanf("%d%*c%c", &a, &ch);
    printf("Entered number & character is %d,%c", a, ch);

    ch;

    printf("\nCharacter of %d is %c", 85, a);
    printf("\nDecimal of %d is %d", a, a);
    printf("\nHexal of %d is %x", a, a);
    printf("\nOctal of %d is %o", a, a);
    printf("\nAscii of %c is %d", ch, '&ch');
}
