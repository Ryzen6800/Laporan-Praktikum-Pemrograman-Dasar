#include <stdio.h>
#include <string.h>

int main()
{
    char kode[1000], pesan[1000];
    char kodeRahasia[1000];

    int bintang = 0;
    int pagar = 0;

    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    if (strlen(kode) != strlen(pesan))
    {
        printf("Panjang kalimat berbeda, pesan palsu!\n");
    }
    else
    {
        for (int i = 0; i < strlen(kode); i++)
        {
            if (kode[i] == pesan[i])
            {
                if (kode[i] == ' ')
                {
                    kodeRahasia[i] = ' ';
                }
                else
                {
                    kodeRahasia[i] = '*';
                    bintang++;
                }
            }
            else
            {
                kodeRahasia[i] = '#';
                pagar++;
            }
        }

        kodeRahasia[strlen(kode)] = '\0';

        printf("%s\n", kodeRahasia);
        printf("'*' = %d\n", bintang);
        printf("'#' = %d\n", pagar);

        if (bintang < pagar)
        {
            printf("Pesan palsu\n");
        }
        else
        {
            printf("Pesan asli\n");
        }
    }

    return 0;
}
