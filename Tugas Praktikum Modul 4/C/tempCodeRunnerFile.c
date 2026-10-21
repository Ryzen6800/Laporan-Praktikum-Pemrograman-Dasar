#include <stdio.h>

int main()
{
    int n, multiple;
    int result = 0;

    printf("input the first number: ");
    scanf("%d", &n);
    printf("input a second number: ");
    scanf("%d", &multiple);

    for (int i = 1; i <= n; i++)
    {
        int total_row = 0;

        for (int j = i; j >= 1; j--)
        {
            total_row += j * multiple;
        }

        result += total_row;

        for (int j = i; j >= 1; j--)
        {
            if (j != i)
            {
                printf(" + ");
            }

            printf("(%d * %d)", j, multiple);
        }

        printf(" = %d\n", total_row);
    }

    printf("%d\n", result);

    return 0;
}