#include <stdio.h>

int main()
{
    int n;
    printf("Enter the  array's size :");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter array elements :\n");
int i;
    for ( i = 0; i < n; i++)
    {
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }
    printf("reversed array elements :\n");

    for ( i = n; i >= 0; i--)
    {
        printf("%d,",a[i]);
    }
}
