#include <stdio.h>

int main() {
    int i;
    int number;
    char symbol[100];

    printf("input a number: ");
    scanf("%d", &number);

    printf("input a symbol: ");
    scanf("%99s", &symbol);

    for (int i = 1; i < 51; i++ ) {
        if (i % number == 0) {
            printf("%s", symbol);
        } else {
            printf("%d", i);
        } 
        
        if (i < 51) {
            printf("");
        }
    } 
    printf("\n");
    return 0;
}