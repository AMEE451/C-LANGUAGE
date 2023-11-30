#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number :");
	scanf("%d",&a);
	if(a<0)
	{
		printf("the number is negative ");
	}
	else if (a==0)
	{
		printf("the number is neutral ");
	}
	else
	{
		printf("the number is positive ");
	}
}
