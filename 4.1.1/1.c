#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("A :%d\n",a);
	printf("B :%d",b);
	
}
