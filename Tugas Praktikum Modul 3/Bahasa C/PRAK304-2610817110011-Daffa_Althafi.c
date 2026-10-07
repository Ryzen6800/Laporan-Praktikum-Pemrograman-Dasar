#include <stdio.h>

int main() {
    int input_value;

    printf("input the value: ");
    scanf("%d", &input_value);

    for (int i = 0; i < 5; i++) {
        if (input_value == 0) {
            printf("Zero\n\n");
        } else if (input_value > 0 && input_value < 10) {
            printf("Ones\n\n");
        } else if (input_value > 9 && input_value < 20) {
            printf("Teens\n\n");
        } else if (input_value > 19 && input_value < 100) {
            printf("Tens\n\n");
        } else {
            printf("Out of range\n\n");
        }

        if (i < 5 - 1) {
            printf("input the value: ");
            scanf("%d", &input_value);
        }
    }

    return 0;
}