#include<stdio.h>

int main()
{
    int n;
    printf("enter any number :");
    scanf("%d", &n);


    int i, a[n];

    int *p[n];
    for(i=0;i<5;i++)
    {
        p[i]=&a[i];
    }
    for(i=0 ; i<n ; i++)
    {
        printf("a[%d]",i);
        scanf("%d", &a[i]);
    }

      for(i=0 ; i<n ; i++)
    {
        printf("p[%d]:%d\n",i,*p[i]*(*p[i]));
    }


}
