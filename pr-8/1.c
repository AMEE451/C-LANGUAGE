#include<stdio.h>
int main()
{
    char name[20];
    char *ptr[10];

    printf("enter your string:");
    scanf("%[^\n]",&name);

    *ptr=strlen(name);

    printf("string length : %d",*ptr);

    return 0;
}
