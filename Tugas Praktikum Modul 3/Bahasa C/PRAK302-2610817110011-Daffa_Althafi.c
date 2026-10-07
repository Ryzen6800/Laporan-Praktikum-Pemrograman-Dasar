#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    for (int i = 0; i < 5; i++) {
        if (grade >= 80) {
            printf("A\n\n");
        } else if (grade >= 70) {
            printf("B\n\n");
        } else if (grade >= 60) {
            printf("C\n\n");
        } else if (grade >= 50) {
            printf("D\n\n");
        } else {
            printf("E\n\n");
        }

        if (i < 5 - 1) {
            printf("Enter your grade: ");
            scanf("%d", &grade);
        }
    }
    return 0;
}