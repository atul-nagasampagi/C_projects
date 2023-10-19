#include <stdio.h>

void printRowMajor(int matrix[][100], int rows, int cols)
{
    printf("Row-Major Order:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printColumnMajor(int matrix[][100], int rows, int cols)
{
    printf("Column-Major Order:\n");
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printSpiral(int matrix[][100], int rows, int cols)
{
    printf("Spiral Order:\n");
    int i, k = 0, l = 0;

    while (k < rows && l < cols)
    {
        for (i = l; i < cols; ++i)
        {
            printf("%d\t", matrix[k][i]);
        }
        k++;

        for (i = k; i < rows; ++i)
        {
            printf("%d\t", matrix[i][cols - 1]);
        }
        cols--;

        if (k < rows)
        {
            for (i = cols - 1; i >= l; --i)
            {
                printf("%d\t", matrix[rows - 1][i]);
            }
            rows--;
        }

        if (l < cols)
        {
            for (i = rows - 1; i >= k; --i)
            {
                printf("%d\t", matrix[i][l]);
            }
            l++;
        }
    }

    printf("\n");
}

int main()
{
    int matrix[100][100];
    int n;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printRowMajor(matrix, n, n);
    printColumnMajor(matrix, n, n);
    printSpiral(matrix, n, n);

    return 0;
}
