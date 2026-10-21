#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;

    for (int i = 0; i < 2; i++)
    {
        printf("Input a number: ");
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            printf("%d ", fibonacci(j));
        }
        printf("\n\n");
    }

    return 0;
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}