#include <stdio.h>
int main()
{
    int i;
    FILE *fp;

    fp=fopen("even.txt","a");

    fprintf(fp"even numbers : %d\t");
    for(i=50;i<70;i++)
    {
        if(i%2==0)
        {
            printf(fp,"%d",i);
        }
    }
    fclose(fp);

    printf("\n\n");

    FILE*fp1;
    fp1=fopen("odd.txt""a");

    fprintf(fp1"odd numbers :");

    for(i=50;i<70;i++)
    {
        if(i%2==1)
        {
            printf(fp,"%d",i);
        }
    }


}
