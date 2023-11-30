#include<stdio.h>

main()
{
	int i,j;
	for(i='a';i<='e';i++)
	{
		for(j=i;j>='a';j--)
		{
				printf("%c",j);
		}
		printf("\n");
	}
}
