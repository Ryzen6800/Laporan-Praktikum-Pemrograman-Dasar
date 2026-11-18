#include <stdio.h>

int main()
{
    int ruangan;
    int zetsu[100];

    scanf("%d", &ruangan);

    for (int i = 0; i < ruangan; i++)
    {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < ruangan; i++)
    {
        int jumlah_zetsu = zetsu[i] * (i + 1);
        printf("%d", jumlah_zetsu);
        
        if (i < ruangan - 1)
        {
            printf(" ");
        }
    }

    return 0;
}