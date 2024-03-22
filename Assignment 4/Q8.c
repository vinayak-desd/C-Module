#include <stdio.h>
int n, m,c;
int fibonacci();
int main()
{
    int a = 0, b = 1;
    n=a,m=b;
    fibonacci();
    fibonacci();
    fibonacci();
    fibonacci();
    fibonacci();
	printf("\n");
	return 0;
}
int fibonacci()
{
    
    c = n + m;
    n = m;
    printf("%2d", m);
    m = c;
    
}

