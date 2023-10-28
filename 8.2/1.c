#include <stdio.h>
int main()
{
    int n1;
    printf("enter arrray size");
    scanf("%d", &n1);

    int a[n1];
    for (int i = 0; i < n1; i++)
    {
        printf("enter array  A's elements a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    int n2;
    printf("enter array size");
    scanf("%d", &n2);

    int b[n2];
    for (int i = 0; i < n2; i++)
    {
        printf("enter array B's elements b[%d] : ", i);
        scanf("%d", &b[i]);
    }
    int m;
    m = n1 + n2;

    int c[m];
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }
    printf("array C :");
    for (int i = 0; i < m; i++)
    {
        printf(" %d", c[i]);
    }

    return 0;
}
