#include <stdio.h>

int main() {
    float value_A, value_B, value_I, value_J, value_X, value_Y;
    float summary;

    for (int i = 0 ; i < 2; i++) {
        printf("Enter value A, B: ");
        scanf("%f %f", &value_A, &value_B);
        printf("Enter value I, J: ");
        scanf("%f %f", &value_I, &value_J);
        printf("Enter value X, Y: ");
        scanf("%f %f", &value_X, &value_Y);

        summary = ((value_A - value_B) * value_I / value_J  ) - (value_X + value_Y);
        printf("Result: %.3f\n\n", summary);
    }

    return 0;
}