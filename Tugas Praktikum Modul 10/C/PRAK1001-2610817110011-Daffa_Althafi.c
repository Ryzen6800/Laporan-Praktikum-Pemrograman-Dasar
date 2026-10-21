#include <stdio.h>

int factorial(int n);

int main()
{
    int n;

    for (int i = 0; i < 3; i++)
    {  
        printf("input number: ");
        scanf("%d", &n);  

        int result_factorial = factorial(n);
        printf("%d! = %d\n\n", n, result_factorial);
    }

    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}