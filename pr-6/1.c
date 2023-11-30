#include <stdio.h>
int main()
{
    char str[20];
    int i, j, len = 0;
    char ispalindrome = 0;
    printf("enter a string : ");
    scanf("%s", &str);

    while (str[len] != NULL)
    {
        len++;
    }
    len--;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            ispalindrome = 1;
            break;
        }
    }
    if (ispalindrome)
    {
        printf("string is palindrome\n");
    }
    else
    {
        printf("string is not palindrome");
    }
}