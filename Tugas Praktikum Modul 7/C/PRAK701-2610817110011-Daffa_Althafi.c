#include <stdio.h>
#include <string.h>

int main()
{
    char namaDepan[100];
    char namaBelakang[100];
    char namaLengkap[200];

    fgets(namaDepan, sizeof(namaDepan), stdin);
    namaDepan[strcspn(namaDepan, "\n")] = '\0';

    fgets(namaBelakang, sizeof(namaBelakang), stdin);
    namaBelakang[strcspn(namaBelakang, "\n")] = '\0';

    strcpy(namaLengkap, namaDepan);
    strcat(namaLengkap, " ");
    strcat(namaLengkap, namaBelakang);

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