#include<stdio.h>
int main()
{
    float sum=0;
    int size;
    printf("enter array size");
    scanf("%d",&size);
    
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("enter array element:a[%d]",i);
        scanf("%d",&a[i]);
    }
    float avg;
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
        avg=sum/size;
        printf(" average is %f\n",avg);
    

    return 0;
}
