#include <stdio.h>

int input()
{
    int size;
    scanf("%d", &size);

    return size;
}
void arrayinput(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }
}
int arraysum(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += a[i];

    return sum;
}
int main()
{
    int size;
    printf("ENter array size :");
    size=input();
    
    int a[size];
    printf("\nEnter array elements :\n");
    arrayinput(a, size);
    int sum= arraysum(a,size);
    printf("The sum of an Array :%d",sum);
}

