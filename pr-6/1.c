#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[20], name2[20];
    int len = 0, n = 0, pal = 0;

    printf("Enter name : ");
    scanf("%s", &name); 

    for (int i = 0; name[i] != '\0'; i++)
        len++;

    for (int i = len - 1; i >= 0; i--)
    {
        name2[n++] = name[i]; 
    }

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == name2[i])
        {
            pal++;
        }
    }

    if (pal == len)
    {
        printf("string is Palindrome");
    }
    else
    {
        printf("string is Not Palindrome");
    }

    return 0;
}
