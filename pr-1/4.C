#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;

	clrscr();
	printf("enter first and second number");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("%d\n",a);
	printf("%d",b);
	getch();
}