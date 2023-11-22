#include <stdio.h>
int main()
{
    int size;

    printf("enter array size");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("array elements a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("negative elements from array are : ");
    for (int i = 0; i <= size; i++)
    {
        if (a[i] < 0)
            printf("%d", a[i]);
    }

    return 0;
}