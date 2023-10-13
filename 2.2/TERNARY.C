#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c;
	clrscr();
	p("enter a:");
	s("%d",&a);
	p("enter b:");
	s("%d",&b);
	p("enter c:");
	s("%d",&c);
	(a<b)
	    ?(a<c)
		  ?p("a is minimum")
		  :p("c is minimum")
	    :(b<c)
		  ?p("b is minimum")
		  :p("c is minimum");
	    getch();
	    }

