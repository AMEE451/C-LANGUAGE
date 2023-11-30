#include <stdio.h>

void cube(int n, int array[n][n])
{
    int *ptr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            ptr[i][j] = &array[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
        }
        printf("\n");
    }
    
}
int main()
{
    int r,c;
     
     printf("enter array size");
     scanf("%d%d",&r,&c);

        int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] :",i,j);
            scanf(" %d ", &a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", &a[i][j]);
        }
        printf("\n");
    }

    cube(r, c);
    return 0;
}
