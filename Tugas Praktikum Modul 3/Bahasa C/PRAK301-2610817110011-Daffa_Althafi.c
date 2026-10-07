#include <stdio.h>

int main() {
    int first_variable, second_variable;

    printf("Enter a value into the first variable: ");
    scanf("%d", &first_variable);

    printf("Enter a value into the second variable: ");
    scanf("%d", &second_variable);

    for (int i = 0; i < 3; i++) {
        if (first_variable > second_variable) {
            printf("%d %d\n\n", second_variable, first_variable);
        } else {
            printf("%d %d\n\n", first_variable, second_variable);
        }

        if (i < 3 - 1) {
            printf("Enter a value into the first variable: ");
            scanf("%d", &first_variable);

            printf("Enter a value into the second variable: ");
            scanf("%d", &second_variable);
        }
    }

    return 0;
}