#include <stdio.h>
int main()
{
    int size;
    printf("enter array size");
    scanf("%d", &size);

    int a1[size], a2[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter array A's element:a1[%d]", i);
        scanf("%d", &a1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("enter array B's element:a2[%d]", i);
        scanf("%d", &a2[i]);
    }
    int a3[size];
    for (int i = 0; i < size; i++)
    {
        a3[i] = a1[i] + a2[i];
    }
    for(int i=0;i<size;i++)
    {
    printf("array a3[%d] is %d\n",i,a3[i]);
    }
    return 0;
}
