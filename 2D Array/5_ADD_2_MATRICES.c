#include <stdio.h>

int main()
{


    int r, c;
    printf("Enter the rows : ");
    scanf("%d", &r);
    printf("enter the columns: ");
    scanf("%d", &c);

    printf("enter 1st matrix :");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
     printf("enter 2nd matrix :");
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int result[r][c];
    

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = arr[i][j] + a[i][j];
            
        }
        printf("\n");
        
    }

     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            
            printf("%d ", result[i][j]);
        }
        printf("\n");
        
    }
    


    return 0;
}