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
            printf(" %d ", (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
            printf("\n");
    }
    
}
int main()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter values of array :");
            scanf(" %d \n", &a[i][j]);
        }
    }

    cube(3, a);
    return 0;
}
