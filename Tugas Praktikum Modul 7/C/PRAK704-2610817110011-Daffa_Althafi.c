#include <stdio.h>
#include <string.h>

int main()
{
    char deskripsi[500];

    fgets(deskripsi, sizeof(deskripsi), stdin);
    deskripsi[strcspn(deskripsi, "\n")] = '\0';

    if (strlen(deskripsi) > 20)
    {
        printf("%.20s...", deskripsi);
    }
    else
    {
        printf("%s", deskripsi);
    }

    return 0;
}