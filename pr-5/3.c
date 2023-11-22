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
            printf("enter array row and column elements a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("-----: THE MATRIX :-----\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("-----: THE TRANSPOSE MATRIX :-----\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
