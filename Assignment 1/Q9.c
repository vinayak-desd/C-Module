#include <stdio.h>

float V, C, F;

int main()
{
    printf("Enter the number for which temperature you want Celcious to farenheit\n");
    scanf("%f", &V);

    F = V * (9.0 / 5.0) + 32;

    printf("%.2f Celcious to Farenheit is = %.2f\n", V, F);

    printf("Enter the number for which temperature you want Farenheit to Celcious\n");
    scanf("%f", &V);

    C = (5.0 / 9.0) * (V - 32);

    printf("%.2f Farenheit to Celcious is = %.2f\n", V, C);
}
