#include <stdio.h>
int main()
{
    char name[20], name1[20];
    int count, run = 0;

    printf("enter string : ");
    scanf("%s", &name);
    printf("enter string2 : ");
    scanf("%s", &name1);

    for (int i = 0; name[i] != NULL; i++)
    {
        count++;
    }
    for (int i = 0; name[i] != NULL; i++)
    {

        if (name[i] == name1[i])
        {
            run = 1;
        }
        else
        {
            run = 0;
        }
    }

    if (run == 1)
        printf("compare successfully");
    else
        printf("not compare successfully");
    return 0;
}
