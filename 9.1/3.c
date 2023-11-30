#include <stdio.h>

int main()
{
    char n[20];

    printf("Enter N :");
    scanf("%[^\n]", &n);

    int i;

    for (i = 0; i < 11; i++)
    {
        if (n[i] >= 'a' && n[i] <= 'z' )
        {
            n[i]-= 32;
        }
        else if(n[i] >= 'A' && n[i] <= 'Z')
        {
            n[i]+=32;
        }
    }

    printf("%s", n);
}
