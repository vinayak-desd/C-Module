#include <stdio.h>

int V, S, T, sum;
int main()
{
    printf("Enter the three number which average you want:\n");
    scanf("%d%d%d", &V, &S, &T);
    printf("You entered numbers are %d, %d, %d\n", V, S, T);

    sum = V + S + T;

    printf("The average is %d / 3 = %d", sum, sum / 3);
}
