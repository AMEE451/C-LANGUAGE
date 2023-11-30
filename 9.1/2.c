#include <stdio.h>

int main()
{
    char n[5];

    printf("Enter N :");
    scanf("%s", &n);

    int i;

    for (i = 0; i < 10; i++)
    {
        if (n[i] >= 'A' && n[i] <= 'Z')
        {
            n[i]+= 32;
        }
    }

    printf("%s", n);
}
