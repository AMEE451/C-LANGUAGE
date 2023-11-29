#include<stdio.h>
int main()
{
    int a,n,sum;
    a=0;
    printf("enter any number");
    scanf("%d",&n);
    
    while(a<=n)
    {
        sum=sum+a;        
        a++;
    }
    printf("sum : %d",sum);
    return 0;
}
