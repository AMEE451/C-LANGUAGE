#include <stdio.h>
int main()
{
    int row, col;

    printf("enter array row : ");
    scanf("%d", &row);

    printf("enter array column : ");
    scanf("%d", &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter array elements a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    int max = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    printf("the largest element of array is : %d", max);
    return 0;
}
