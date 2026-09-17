#include <stdio.h>

int main()
{
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;
    float hasil = (float)(a + b) * x / y;
    printf("variabel a adalah %d\n", a);
    printf("variabel b adalah %d\n", b);
    printf("variabel x adalah %d\n", x);
    printf("variabel y adalah %d\n", y);
    printf("hasil dari (a + b) * x / y) adalah %.2f\n", hasil);
    return 0;
}