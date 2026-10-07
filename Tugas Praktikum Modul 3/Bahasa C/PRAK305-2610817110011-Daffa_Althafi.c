#include <stdio.h>

int main() {
    int total_seconds;
    int day, hour, minute, second; 

    printf("input number of seconds: ");
    scanf("%d", &total_seconds);

    for (int i = 0; i < 5; i++) {
        day = total_seconds / 86400;
        total_seconds = total_seconds % 86400;

        hour = total_seconds / 3600;
        total_seconds = total_seconds % 3600;

        minute = total_seconds / 60;
        second = total_seconds % 60;

        if (day > 0) {
            printf("%d day %02d:%02d:%02d\n\n", day, hour, minute, second);
        } else {
            printf("%02d:%02d:%02d\n\n", hour, minute, second);
        }

        if (i < 5 - 1) {
            printf("input number of seconds: ");
            scanf("%d", &total_seconds);
        }
    }

    return 0;
}   