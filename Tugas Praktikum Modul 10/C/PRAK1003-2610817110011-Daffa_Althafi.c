#include <stdio.h>

int total_digit(int number);

int main()
{
    int number;

    for (int i = 0; i < 2; i++) 
    {
        printf("Input a number: ");
        scanf("%d", &number);

        int result = total_digit(number);
        printf("Total digit of %d is %d\n\n", number, result);
    }

    return 0;
}

int total_digit(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return (number % 10) + total_digit(number / 10);
    }
}