#include <stdio.h>

int main()
{
    int r, c, a, b;

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &c);

    printf("Enter matrix elements for the first matrix:\n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &a);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &b);

    if (c != a)
    {
        printf("Error: Number of columns in the first matrix should be equal to the number of rows in the second matrix for multiplication.\n");
        return 1;
    }

    printf("Enter matrix elements for the second matrix:\n");
    int brr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }

    int result[r][b];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < b; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                result[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    printf("Result Matrix (Multiplication of the matrices):\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
