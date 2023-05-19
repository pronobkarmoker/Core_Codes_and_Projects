#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the rows : ");
    scanf("%d", &r);
    printf("enter the columns: ");
    scanf("%d", &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");
    // TRANSPOSE
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    // STORE
    printf("\n");
    int brr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            brr[i][j] = arr[j][i];
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}