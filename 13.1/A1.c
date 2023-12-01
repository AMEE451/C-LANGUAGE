#include <stdio.h>

int main()
{

    
    FILE *fp;

    fp = fopen("read.txt", "w");

    fprintf(fp, "hello world\n");

    fclose(fp);

    return 0;
}
