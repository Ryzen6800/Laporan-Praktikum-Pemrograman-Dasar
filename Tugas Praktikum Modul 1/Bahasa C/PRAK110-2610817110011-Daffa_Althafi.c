#include <stdio.h>
#include <math.h>

int main()
{
    int A = 5;
    int C = 12;

    int height = C;
    int base = A;
    int hypotenuse = sqrt(pow(height, 2) + pow(base, 2));
    int perimeter = height + base + hypotenuse;
    int area = (height * base) / 2;

    printf("Height of the triangle: %d\n", height); 
    printf("Base of the triangle: %d\n", base);
    printf("Hypotenuse of the triangle: %d\n", hypotenuse);
    printf("Perimeter of the triangle: %d\n", perimeter);
    printf("Area of the triangle: %d\n", area);
}