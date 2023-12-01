#include<stdio.h>
int main()
{
    int i;

    FILE *fp;

    fp=fopen("div.txt","w");


    for( i=1;i<=50;i++)
    {
        if(i%3==0 && i%5==0)
        {
            fprintf(fp,"%d ",i);
        }
        
    }

    fclose(fp);
    return 0;
}
