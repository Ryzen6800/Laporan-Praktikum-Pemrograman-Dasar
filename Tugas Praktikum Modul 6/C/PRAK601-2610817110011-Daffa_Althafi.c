#include <stdio.h>

int main() {
    int baris, kolom;
    int nilai[100];

    scanf("%d %d", &baris, &kolom);

    for (int i = 0; i < baris * kolom; i++) {
        scanf("%d", &nilai[i]);
    }

    int matriks[100][100];

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            matriks[i][j] = nilai[i * kolom + j];
        }
    }
        
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
