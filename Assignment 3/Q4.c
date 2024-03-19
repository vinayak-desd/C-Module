#include <stdio.h>

int main()
{
    int  b, c,d;
	unsigned long long a;
    printf("Enter the number : ");
    scanf("%llu", &a);
    b = a;
	d=a;
    c = 1;
    --b;
	printf("1 ");
    while (b > 0)
    {
        a = a * c;
		if(c!=1 && c!= d)
			printf(" * %d",c);
        --b;
		c++;
        
    }
	printf(" * %d = %llu\n",d,a);	

    return 0;
}
