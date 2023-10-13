#include<stdio.h>
#include<conio.h>
main()
{
	int base salary,DA,HRA,TA,gross salary;
	clrscr();
	printf("enter base salary");
	scanf("%d",&base salary);
	HRA=base salary*10/100;
	DA=base salary*5/100;
	TA=base salary*8/100;
	gross salary=base salary+HRA+DA+TA;
	printf("%d",gross salary);
	getch();
}