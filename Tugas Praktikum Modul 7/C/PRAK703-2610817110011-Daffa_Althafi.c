#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char kalimat[200];
    int jumlahVokal = 0;
    int jumlahKonsonan = 0;

    printf("Kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    for (int i = 0; i < strlen(kalimat); i++)
    {
        if (strchr("AIUEO", toupper(kalimat[i])) != NULL)
        {
            jumlahVokal++;
        }
        else if (strchr("BCDFGHJKLMNPQRSTVWXYZ", toupper(kalimat[i])) != NULL)
        {
            jumlahKonsonan++;
        }
    }

    printf("Jumlah Vokal: %d\n", jumlahVokal);
    printf("Jumlah Konsonan: %d\n", jumlahKonsonan);

    return 0;
}