#include<stdio.h>
int main()
{
	int n,first ,last;
	printf("enter any number");
	scanf("%d",&n);
	last=n%10;
	do
	{
		n=n/10;

	} while (n>=10);
		first=n;
		printf("total number of digit: %d",first+last);
		

	return 0;
}

