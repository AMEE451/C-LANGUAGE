#include <stdio.h>
int main()
{
    char name[50], count;

    printf("enter any string");
    scanf("%[^\n]", &name);

    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        count = 1;
        if (name[i] != '\0')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (name[i] == name[j])
                {
                    count++;
                    name[j] = '\0';
                }
            }
            printf("%c : %d\n", name[i], count);
        }
    }

    return 0;
}
