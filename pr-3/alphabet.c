#include<stdio.h>
int main()
{
    char i='a';
    do{
        printf("%c\t",i);
        i+=4;
    }
    while(i<='z');
    return 0;
}
