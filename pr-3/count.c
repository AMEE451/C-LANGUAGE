#include<stdio.h>
int main()
{
    int no,count=0;
    printf("enter any number");
    scanf("%d",&no);
    while(no!=0)
    {
        no=no/10;
        count++;
    }
    printf("total number of digits : %d",count);
    return 0;
}
