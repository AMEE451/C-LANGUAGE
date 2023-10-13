#include<stdio.h>
main()
{
	int basesalary, DA, HRA, TA, grosssalary;

	printf("enter basesalary");
	scanf("%d", &basesalary);

	HRA = basesalary * 10 / 100;
	DA = basesalary * 5 / 100;
	TA = basesalary * 8 / 100;

	grosssalary = basesalary + HRA + DA + TA;
	
	printf("%d", grosssalary);
}
