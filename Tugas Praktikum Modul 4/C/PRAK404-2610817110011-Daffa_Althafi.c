#include <stdio.h>

int program_addition(int number1, int number2)
{
    return number1 + number2;
}

int program_subtraction(int number1, int number2)
{
    return number1 - number2;
}

double program_multiplication(int number1, int number2)
{
    return (double)number1 * number2;
}

double program_division(int number1, int number2)
{
    return (double)number1 / number2;
}

int main()
{
    int number1;
    int number2;

    while (1)
    {
        printf("program 1: Addition\n");
        printf("program 2: Subtraction\n");
        printf("program 3: Multiplication\n");
        printf("program 4: Division\n");
        printf("program 5: Exit\n\n");

        int program_choice;
        printf("Select program (1 - 5): ");
        scanf(" %d", &program_choice);
        printf("\n");

        if (program_choice == 5)
        {
            printf("Thankyou for using the calculator Daffa Althafi\n");
            break;
        }

        else if (program_choice == 1 || program_choice == 2 || program_choice == 3 || program_choice == 4)
        {
            printf("input number(1): ");
            scanf("%d", &number1);
            printf("input number(2): ");
            scanf("%d", &number2);

            if (program_choice == 1)
            {
                printf("result: %d\n\n", program_addition(number1, number2));
            }

            else if (program_choice == 2)
            {
                printf("result: %d\n\n", program_subtraction(number1, number2));
            }

            else if (program_choice == 3)
            {
                printf("result: %.2f\n\n", program_multiplication(number1, number2));
            }

            else if (program_choice == 4)
            {
                if (number2 != 0)
                {
                    printf("result: %.2f\n\n", program_division(number1, number2));
                }
                else
                {
                    printf("Error, you cannot divide number by zero!\n");
                }
            }

        }

        else
        {
            printf("Invalid input, try again\n\n");
        }
    }

    return 0;
}
