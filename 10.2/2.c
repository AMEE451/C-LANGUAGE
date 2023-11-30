#include <stdio.h>
#include <string.h>
char input()
{
    char n[5];
    scanf("%s", &n);
}

int output(char n[])
{
    printf("length :%d", strlen(n));
}
int main()
{
    char n[5];
    printf("Enter any string :");
    scanf("%s", &n);
    output(n);
}
