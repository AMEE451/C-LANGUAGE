#include <stdio.h>
int main()
{
    int size;
    printf("enter array size");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter array elements a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        a[i] = a[i] * a[i];
    }
    printf("the squares are :");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    return 0;
}
