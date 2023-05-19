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

    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }

    printf("The sum of matrix is %d .", sum);

    return 0;
}