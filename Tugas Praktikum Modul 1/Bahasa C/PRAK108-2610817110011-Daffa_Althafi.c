#include <stdio.h>

int main()
{
    int jarak_tempuh = 14;
    int banyak_putaran = 5;
    float keliling_satu_putaran =(float) jarak_tempuh / banyak_putaran;
    float jari_jari_lingkaran =
    keliling_satu_putaran / (2 * 3.14);

    printf("Pak Dengklek mengelilingi taman sebanyak = %d putaran\n", banyak_putaran);
    printf("Jarak tempuh Pak Dengklek adalah = %d meter\n", jarak_tempuh);
    printf("Jari-jari lingkaran adalah: %.2f\n", jari_jari_lingkaran);
}