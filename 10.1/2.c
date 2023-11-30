#include <stdio.h>
void factor(int a)
{
    
    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("The given number is dividible by both 3 and 5");
    }
    else
    {
        printf("it is not divisible by 3 and 5");
    }
}
int main()
{
    int a;
    printf("enter the value");
    scanf("%d",&a);
    factor(a);
    return 0;
}