#include <stdio.h>

int main() {
    int baris, kolom;
    int angkaBaris1[100];
    int angkaBaris2[100];

    scanf("%d %d", &baris, &kolom);

    if (baris != kolom) {
        printf("Jumlah tidak sama\n");
    } else {
        for (int i = 0; i < baris; i++) {
            scanf("%d", &angkaBaris1[i]);
        }

        for (int i = 0; i < baris; i++) {
            scanf("%d", &angkaBaris2[i]);
        }

        for (int i = 0; i < baris; i++) {
            int hasilPerkalian = angkaBaris1[i] * angkaBaris2[i];
            printf("%d", hasilPerkalian);

            if (i < baris - 1) {
                printf(" ");
            }
        }
    }
    
    return 0;
}
