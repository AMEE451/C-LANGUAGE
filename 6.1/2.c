#include<stdio.h>
int main()
{
    int n,a,fact=1;
    a=1;
    printf("enter any number");
    scanf("%d",&n);

    while(a<=n)
    {
        fact=fact*a;
        a++;
    }
    printf("%d",fact);
    return 0;
}
