#include <stdio.h>

int main()
{
    int sepatu_a = 400000;
    int sepatu_b = 350000;
    int diskon_sepatu_a = 400000 - (400000 * 13 / 100);
    int diskon_sepatu_b = 350000 - (350000 * 21 / 100);
    printf("Harga sepatu A adalah %d\n", sepatu_a);
    printf("Harga sepatu B adalah %d\n", sepatu_b);
    printf("Diskon sepatu A adalah %d\n", diskon_sepatu_a);
    printf("Diskon sepatu B adalah %d\n", diskon_sepatu_b);
    return 0;
}