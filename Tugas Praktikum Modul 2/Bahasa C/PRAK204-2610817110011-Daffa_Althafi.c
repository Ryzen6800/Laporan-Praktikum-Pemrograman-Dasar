#include <stdio.h>

int main() {
    float radius_of_circle, vessel_height;
    float volume, wide, around;
    float pi = 22.0 / 7.0;

    for (int i = 0; i < 2; i++) {
        printf("input radius of a circle: ");
        scanf("%f", &radius_of_circle);

        printf("input vessel height: ");
        scanf("%f", &vessel_height);

        volume = pi * radius_of_circle * radius_of_circle * vessel_height;
        wide = 2 * pi * radius_of_circle * (radius_of_circle + vessel_height);
        around = 2 * pi * radius_of_circle;

        printf("vessel volume = %.2f\n", volume);
        printf("Surface area of vessel = %.2f\n", wide);
        printf("circumference of the vessel = %.2f\n\n", around);
    }

    return 0;
}