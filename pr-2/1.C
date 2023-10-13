#include<stdio.h>
#include<conio.h>
main()
{
	char n;
	clrscr();
	printf("enter any character");
	scanf("%c",&n);
	if((n>='A'&&n<='Z')||(n>='a'&&n<='z'))
	{
		printf("alphabet");
	}
	else if(n>='0'&&n<='9')
	{
		printf("digit");
	}
	else
	{
		printf("special character");
	}
	getch();
}

