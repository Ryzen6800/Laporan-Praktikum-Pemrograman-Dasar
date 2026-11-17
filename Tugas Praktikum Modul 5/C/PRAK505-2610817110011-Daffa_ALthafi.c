#include <stdio.h>

void Biodata(int tahunLahir, char Nama[], char AsalDaerah[])
{
    int tahunSekarang = 2020;
    // Lengkapi Function ini 
    int umur = tahunSekarang - tahunLahir;

    printf("Perkenalkan Nama Saya: %s\n", Nama);
    printf("Umur Saya: %d\n", umur);
    printf("Saya Adalah Angkatan: %d\n", tahunSekarang);
    printf("Asal Saya dari: %s\n", AsalDaerah);
}
int main()
{
    int tahunLahir;
    char Nama[20], Asal[15];
    scanf(" %d", &tahunLahir);
    scanf(" %[^\n]%*c", &Nama);
    scanf(" %[^\n]%*c", &Asal);
    Biodata(tahunLahir, Nama, Asal);
    return 0;
}