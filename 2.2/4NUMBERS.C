#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c,d;
	clrscr();
	p("enter a:");
	s("%d",&a);
	p("enter b:");
	s("%d",&b);
	p("enter c:");
	s("%d",&c);
	p("enter d:");
	s("%d",&d);
	if(a>b)
	{
	     if(a>c)
	     {
		  if(a>d)
		  {
		       p("a is maximum");
		  }
		  else
		  {
		       p("d is maximum");
		  }
	      }

	     else
	     {
		 if(c>d)
		 {
		      p("c is maximum");
		 }
		 else
		 {
		      p("d is maximum");
		 }
	     }
	}
	else
	{
	     if(b>c)
	     {
		  if(b>d)
		  {
		       p("b is maximum");
		  }
		  else
		  {
		       p("d is maximum");
		  }
	     }
	     else
	     {
		  if(c>d)
		  {
		       p("c is maximum");
		  }
		  else
		  {
		       p("d is maximum");
		  }
	     }

	}
	getch();
	}