#include<stdio.h>
#include<conio.h>
main()
{
	int a1,a2,a3;
	clrscr();
	printf("enter first and second angle");
	scanf("%d%d",&a1,&a2);
	a3=180-(a1+a2);
	printf("%d",a3);
	getch();
}
