#include <stdio.h>
#include <math.h>

int main()
{
    int perimeter, a, b, c;
    double area, s;
    a = 3;
    b = 4;
    c = 5;

    printf("The sides of triangles are %d,%d,%d\n", a, b, c);
    perimeter = a + b + c;//12
    printf("The perimeter of tringle is %d\n", perimeter);
    s = (perimeter / 2);//6
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of triangle is %f\v", area);//6.000000

    a = 1;
    b = 2;
    c = 3;
    printf("The sides of triangles are %d,%d,%d\n", a, b, c);
    perimeter = a + b + c;//6
    printf("The perimeter of tringle is %d\n", perimeter);
    s = (perimeter / 2);//3
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of triangle is %f\v", area);//0.000000

    a = 1;
    b = 2;
    c = 4;
    printf("The sides of triangles are %d,%d,%d\n", a, b, c);
    perimeter = a + b + c;//7
    printf("The perimeter of tringle is %d\n", perimeter);
    s = (perimeter / 2);//3.5
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of triangle is %f\v", area);
    //garbage value because parameter passed to sqrt function is less than zero (negative)

    return 0;
}
