#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	(a<b)
		?(a<c)
			?printf("a is small ")
			:printf("c is small ")
		:(b<c)
			?printf("b is small")
			:printf("c is small");	
	return 0;	
}
