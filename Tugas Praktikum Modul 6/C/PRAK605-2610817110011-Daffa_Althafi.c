#include <stdio.h>

int main()
{
    int ukuranMatriks;
    int matriksA[100][100];
    int matriksB[100][100];
    int hasil[100][100];
    char label[100];

    scanf("%d", &ukuranMatriks);
    getchar();
    fgets(label, sizeof(label), stdin);

    for (int i = 0; i < ukuranMatriks; i++)
    {
        for (int j = 0; j < ukuranMatriks; j++)
        {
            scanf("%d", &matriksA[i][j]);
        }
    }

    getchar();
    fgets(label, sizeof(label), stdin);

    for (int i = 0; i < ukuranMatriks; i++)
    {
        for (int j = 0; j < ukuranMatriks; j++)
        {
            scanf("%d", &matriksB[i][j]);
        }
    }

    for (int i = 0; i < ukuranMatriks; i++)
    {
        for (int j = 0; j < ukuranMatriks; j++)
        {
            hasil[i][j] = 0;

            for (int k = 0; k < ukuranMatriks; k++)
            {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    printf("Matriks AXB\n");

    for (int i = 0; i < ukuranMatriks; i++)
    {
        for (int j = 0; j < ukuranMatriks; j++)
        {
            printf("%d", hasil[i][j]);

            if (j < ukuranMatriks - 1)
            {
            printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}