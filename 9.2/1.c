#include <stdio.h>

int main()
{
    char psw[6];
    int count = 0, i, a, b, c, d;
    printf("Enter your password : ");
    scanf("%s", &psw);

    for (i = 0; psw[i] != '\0'; i++)
        count++;
        
    for (i = 0; psw[i] != '\0'; i++)
    {
        if (count >= 6)
        {
            if (psw[i] >= 65 && psw[i] <= 90)
                a = 1;
            else if (psw[i] >= 97 && psw[i] <= 122)
                b = 1;
            else if (psw[i] >= 48 && psw[i] <= 57)
                c = 1;
            else
                d = 1;
        }
    }

    if (a == 1 && b == 1 && c == 1 && d == 1)
        printf("Password is Strong !!");
    else
        printf("Password is not Strong !!");

    return 0;
}