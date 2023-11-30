#include<stdio.h>

int dtob(int n)
{
    int bin=0;
    while(n>0)
    {
        n=n%2;
        bin=bin*10+n;
        n=n/2;
    }
    return bin;
}

int main()
{
    int dec;
    printf("enter decimal number");
    scanf("%d",&dec);
    printf("the binary value is : %d",dtob(dec));
    
    //dtob(dec);
    //return 0;
}
