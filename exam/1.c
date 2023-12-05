#include<stdio.h>
{
    if(i<=a)
    {
        a+=i;i++;
        sim(n,i,a);
    }
}
int main()
{
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    sum(a,0,1);
    return 0;
}
