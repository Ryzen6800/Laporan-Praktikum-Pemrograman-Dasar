#include <stdio.h>

int main() {
    int number1;
    int number2;

    printf("Input the first number: ");
    scanf("%d", &number1);

    printf("Input the second number: ");
    scanf("%d", &number2);

    if (number1 < number2) {
        int total = number2 - number1 + 1;

        for (int i = 0; i < total; i++) {
            printf("%d %d", number1 + i, number2 - i);

            if (i < total - 1) {
                printf(" - ");
            }
        }
    } else {
        int total = number1 - number2 + 1;

        for (int i = 0; i < total; i++) {
            printf("%d %d", number1 - i, number2 + i);

            if (i < total - 1) {
                printf(" - ");
            }
        }
    }

    printf("\n");

    return 0;
}