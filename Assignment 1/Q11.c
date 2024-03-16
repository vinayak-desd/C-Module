#include <stdio.h>
#include <limits.h>

int main() 
{
	printf(" Data type         Size     Format                     Range\n");
	printf("                           specifier         \n");
	printf("---------------------------------------------------------------------\n");
	printf("Char                %d        %%c  %19d  to %-11d\n",sizeof(char),CHAR_MIN,CHAR_MAX);
	printf("Unsigned Char       %d        %%c  %19d  to %-11d\n",sizeof(unsigned char),0,UCHAR_MAX);
	printf("Short Int           %d       %%hd  %19d  to %-11d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("Unsigned Short Int  %d       %%hu  %19d  to %-11d\n",sizeof(unsigned short int),0,USHRT_MAX);
	printf("Int                 %d        %%d  %19d  to %-11d\n",sizeof(int),INT_MIN,INT_MAX);
	printf("Unsigned Int        %d        %%u  %19u  to %-11u\n",sizeof(unsigned int),0,UINT_MAX);
	printf("Long Int            %d       %%ld  %11ld to %-11ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("Unsigned Long Int   %d       %%lu  %19lu to %-11lu\n",sizeof(unsigned long int),0,ULONG_MAX);
	printf("----------------------------------------------------------------------\n");

	return 0;
}
