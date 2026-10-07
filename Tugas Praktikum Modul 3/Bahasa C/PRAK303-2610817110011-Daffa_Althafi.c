#include <stdio.h>

int main() {
    int input_value;

    printf("input the value: ");
    scanf("%d", &input_value);

    for (int i = 0; i < 3; i++) {
        if (input_value > 0 ) {
            printf("positive\n\n");
        } else if (input_value < 0) {
            printf("negative\n\n");
        } else {
            printf("zero\n\n");
        }

        if (i < 3 - 1) {
            printf("input the value: ");
            scanf("%d", &input_value);
        }
    }


    return 0;
}