#include <stdio.h>

int main()
{
    int ns, rm;
    printf("Enter the number of students : ");
    scanf("%d", &ns);
    printf("enter the columns: ");
    scanf("%d", &rm);

    int arr[ns][rm];
    for (int i = 0; i < ns; i++)
    {
        for (int j = 0; j < rm; j++)
        {
            while (j == 0)
            {
                printf("enter roll number : ");
                scanf("%d", &arr[i][j]);
                break;
            }
            while (j == 1)
            {
                printf("enter marks : ");
                scanf("%d", &arr[i][j]);
                break;
            }
        }
    }

    for (int i = 0; i < ns; i++)
    {
        for (int j = 0; j < rm; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}