#include<stdio.h>
 void cube(int a)
{
    int b =a*a*a;
    printf("cube of %d is %d",a,b);
}
int main()
{
    int a;
    printf("enter avlue of a");
    scanf("%d",&a);

    cube(a);
    return 0;
}