#include <stdio.h>
int main()
{
    int length;
    int size;
    printf("enter array size");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter array element a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        length = size;
        printf("array length:%d\n",length);
    }
    return 0;
}
