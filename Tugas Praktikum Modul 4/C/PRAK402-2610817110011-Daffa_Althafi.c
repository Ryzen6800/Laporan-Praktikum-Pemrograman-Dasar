#include <stdio.h>

int main() {
    int number;

    printf("input a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    int even_number;

    if (number % 2 == 0) {
        even_number = number;
    } else {
        even_number = number - 1;
    }
    
    for (int i = even_number; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}