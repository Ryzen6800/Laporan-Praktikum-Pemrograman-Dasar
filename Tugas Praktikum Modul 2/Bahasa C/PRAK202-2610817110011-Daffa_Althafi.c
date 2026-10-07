#include <stdio.h>

int main() {
    float first_value;
    float second_value;
    int times;

    printf("How many times do you want to calculate the sum of two values? : ");
    scanf("%d", &times);

    printf("Enter first value: ");
    scanf("%f", &first_value);

    printf("Enter second value: ");
    scanf("%f", &second_value);
    
    for (int i = 0; i < times; i++) {
        float sum = first_value + second_value;
        printf("The sum of the first value %.2f and the second value %.2f is %.2f\n\n", first_value, second_value, sum);

        if (i < times - 1) {
            printf("Enter first value: ");
            scanf("%f", &first_value);

            printf("Enter second value: ");
            scanf("%f", &second_value);
        }
    }

    return 0;
}