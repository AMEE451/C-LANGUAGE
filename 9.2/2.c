#include <stdio.h>

int main()
{
    char a[20] = "admin@gmail.com";
    char b[20] = "123456";
    char a1[20] ;
    char b1[20] ;
    printf("Enter your email :");
    scanf("%s", &a1);
    printf("Enter your password :");
    scanf("%s", &b1);
    int i;
        if (a[i] == a1[i] && b[i] == b1[i])
        {
            printf("login successful.....\n");
        }
        else
        {
            printf("login failed.invalid credentials\n");
        }
}