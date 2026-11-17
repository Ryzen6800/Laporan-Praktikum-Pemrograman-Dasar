#include <stdio.h>
#include <string.h>

int main()
{
    char namaDepan[100];
    char namaBelakang[100];
    char namaLengkap[200];

    scanf("%99s", namaDepan);
    scanf("%99s", namaBelakang);
    strcpy(namaLengkap, strcat(strcat(namaDepan, " "), namaBelakang));

    int panjangString = 0;

    for (int i = 0; i < strlen(namaLengkap); i++)
    {
        if (namaLengkap[i] != ' ')
        {
            panjangString++;
        }
    }

    printf("Nama Lengkap: %s\n", namaLengkap);
    printf("Panjang Nama(tanpa spasi): %d\n", panjangString);

    return 0;
}