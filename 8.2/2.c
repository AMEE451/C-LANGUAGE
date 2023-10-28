#include <Stdio.h>
int main()
{
    int year1,year2,size=0;
    printf("enter the first number");
    scanf("%d", &year1);
    printf("enter the second number");
    scanf("%d", &year2);

    int leap[year2-year1];
    for(int i=year1; i<=year2; i++)
    {
        if(i%4==0)
        {
            leap[size]=i;
            size++;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",leap[i]);
    }
    return 0;
}
