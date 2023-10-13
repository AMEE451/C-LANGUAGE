#include<stdio.h>
#include<conio.h>
main()
{
	int n,i=1;
	clrscr();
	printf("enter any number");
	scanf("%d",&n);
	printf("%d*1=%d",n,n*1);
	i++;
	printf("%d*%d=%d\n",n,i++,n*i);


	getch();
}