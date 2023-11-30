#include<stdio.h>
int main()
{
	char a;
	
	printf("Enter charcater :");
	scanf("%c",&a);
	if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	{
	    printf("this charcater is vowel");
	}
	else if(a=='a' ||a=='e'||a=='i'||a=='o'||a=='u')
	{
		printf("this charcater is vowel");
	}
	else
	{
		printf("this charcater is consonant");
	}
	
}
