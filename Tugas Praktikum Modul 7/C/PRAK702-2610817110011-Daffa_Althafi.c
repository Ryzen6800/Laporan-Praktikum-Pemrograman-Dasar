#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    char revKata[100];

    for (int i = 0; i < 3; i++) {
        scanf("%99s", kata);

        int panjang = strlen(kata);

        for (int j = 0; j < panjang; j++) {
            revKata[j] = kata[panjang - 1 - j];
        }

        revKata[panjang] = '\0';

        if (strcmp(kata, revKata) != 0) {
            printf("Kata '%s' bukan palindrom\n", kata);
        } else {
            printf("Kata '%s' adalah palindrom\n", kata);
        }
    }

    return 0;
}