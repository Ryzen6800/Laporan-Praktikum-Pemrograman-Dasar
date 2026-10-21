#include <stdio.h>

int disk(int n);

int main()
{
    int n;

    for (int i = 0; i < 2; i++)
    {
        printf("p: ");
        scanf("%d", &n);

        int result = disk(n);
        printf("The minimum number of steps for %d disks is %d\n\n", n, result);
    }

    return 0;
}

int disk(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 2 * disk(n - 1) + 1;
    }
}