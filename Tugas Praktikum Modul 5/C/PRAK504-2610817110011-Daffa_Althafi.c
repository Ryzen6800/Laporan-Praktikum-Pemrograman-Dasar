#include <stdio.h>

int reverse(int number)
{
    // Lengkapi Function ini
    int reverse_number = 0;
    while (number > 0)
    {
        int digit = number % 10;
        reverse_number = reverse_number * 10 + digit;
        number = number / 10;
    }
    return reverse_number;
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
}