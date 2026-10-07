#include <stdio.h>
#include <math.h>

int main() {
    float height_of_triangle, hypotenus_of_triangle, base_of_triangle;
    float area_of_triangle, perimeter_of_triangle;

    for (int i = 0; i < 2; i++) {
        printf("input value triangle's height: ");
        scanf("%f", &height_of_triangle);

        printf("input value of triangle's hypotenus: ");
        scanf("%f", &hypotenus_of_triangle);


        base_of_triangle = sqrt(pow(hypotenus_of_triangle, 2) - pow(height_of_triangle, 2));
        perimeter_of_triangle = hypotenus_of_triangle + height_of_triangle + base_of_triangle;
        area_of_triangle = (base_of_triangle * height_of_triangle) / 2;

        printf("base of triangle = %.2f\n", base_of_triangle);
        printf("height of tiangle = %.2f\n", height_of_triangle);
        printf("perimeter of triangle = %.2f\n", perimeter_of_triangle);
        printf("area of triangle = %.2f\n\n", area_of_triangle);
    }

    return 0;
}