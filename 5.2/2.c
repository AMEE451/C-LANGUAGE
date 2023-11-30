#include<stdio.h>
int main()
{
	int a,b,c,d;

	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	printf("Enter D :");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c)
		{
		     if(a>d)
		     {
			  printf("a is big !!");
		     }
		     else
		     {
			  printf("d is big !!");
		     }
		}
		else if(c>d)
		{
			printf("c is big !!");
		}
		else
		{
			printf("d is big !!");
		}
	}
	else
	{
		if(b>c)
		{
		     if(c>d)
		     {
			  printf("c is big !!");
		     }
		     else
		     {
			  printf("d is big !!");
		     }
		}
		else if(c>d)
		{
			printf("c is big !!");
		}
		else
		{
			printf("d is big !!");
		}
	}
	return 0;
}
