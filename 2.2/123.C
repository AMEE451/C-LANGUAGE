#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c;
	clrscr();
	p("press 1 for english\n");
	s("%d",&a);
	p("press 2 for hindi\n");
	s("%d",&b);
	p("press 3 for gujarati\n");
	s("%d",&c);
	p("enter your choice\n");
	switch(a)
	{
	case 1:
		p("press 1 for internet recharge");
		p("press 2 for top up recharge");
		p("press 3 for special recharge");
		break;
	case 2:
		p("internet recharge ke liye 1 dabaiye");
		p("top up recharge ke liye 2 dabaiye");
		p("special recharge ke liye 3 dabaiye");
		break;
	case 3:
		p("internet recharge mate 1 dabavo");
		p("top up recharge mate 2 dabavo");
		p("special recharge mate 3 dabavo");
		break;
	default:
		p("invalid operation");
		break;
	}
	getch();
	}
