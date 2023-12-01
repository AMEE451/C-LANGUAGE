#include <stdio.h>
int main()
{
    int i;
    FILE *fp;

    fp = fopen("even.txt", "w");

    fprintf(fp, "even numbers : ");
    for (i = 50; i < 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(fp, " %d ", i);
        }
    }
    fclose(fp);

    printf("\n\n");

    FILE *fp1;
    fp1 = fopen("odd.txt", "w");

    fprintf(fp1, "odd numbers :");

    for (i = 50; i < 70; i++)
    {
        if (i % 2 == 1)
        {
            fprintf(fp, " %d ", i);
        }
    }
}
