#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 4;
    int b = 5;
    int c = 7;
    int fence_per_meter = 85000;
    int perimeter_of_land = a + b + c;
    int cost_fence = perimeter_of_land * fence_per_meter;

    printf("Length of side a: %d\n", a);
    printf("Length of side b: %d\n", b);
    printf("Length of side c: %d\n", c);
    printf("Perimeter of the land: %d\n", perimeter_of_land);
    printf("Price of land per meter is %d\n", fence_per_meter);
    printf("Total cost of the fence: %d", cost_fence);
    return 0;
}