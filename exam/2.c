#include<stdio.h>
int main()
{
    char email[20];
    char psw[8];
    int count=1,a,b,c,d,e,f,i;

    printf("enter your email : ");
    scanf("%s",&email);
    printf("enter your pass word : ");
    scanf("%d",&psw);

    for(int i=0;i<='\0';i++)
    count++;

    for(int i=0;i<='\0';i++)
    {
        if(i==65&&i==90)
        a==1;
        else if(i==97&&i==122)
        b==1;
        else if(i==48&&1==57)
        c==1;
        else(i==38&&i==47||i==58&&i==64)
        d==1;

    }

    if(a==1&&b==1&&c==1&&d==1&&e=='@'&&f=='.')
    printf("email and password are strong");
    else
    printf("email and password are not strong");
    return 0;
}
