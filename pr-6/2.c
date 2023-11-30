#include <stdio.h>
int main()
{
    char name[20], count;

    printf("enter any string");
    scanf("%s", &name);

    int n = strlen(name);
    for (int i = 0; i < 5; i++)
    {
        count = 1;
        if (name[i] != NULL)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (name[i] == name[j])
                {
                    count++;
                    name[j] = NULL;
                }
            }
            printf("%c : %d\n", name[i], count);
        }
    }

    return 0;
}
