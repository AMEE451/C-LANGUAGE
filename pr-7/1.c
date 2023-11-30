#include <stdio.h>

void sum(int n1, int n2)
{
    printf("sum : %d+%d=%d", n1, n2, n1 + n2);
}
void sub(int n1, int n2)
{
    if (n1 > n2)
        printf("sub : %d-%d=%d", n1, n2, n1 - n2);
    else
        printf("sub : %d-%d=%d", n2, n1, n2 - n1);
}
void mul(int n1, int n2)
{
    printf("multiplication : %d*%d=%d", n1, n2, n1 * n2);
}
void div(int n1, int n2)
{
    if (n1 > n2)
        printf("division : %d/%d=%d", n1, n2, n1 / n2);
    else
        printf("div : %d/%d=%d", n1, n2, n2 / n1);
}
void mod(int n1, int n2)
{
    if (n1 > n2)
        printf("mod : %d %% =%d", n1, n2, n1 % n2);
    else
        printf("mod : %d %% =%d", n1, n2, n2 % n1);
}
int main()
{
    int choice, n1, n2,i;
	
    for( i = 5;i>=0;i--)
    {
    printf("\nenter 1 >> addition");
    printf("\nenter 2 >> substraction");
    printf("\nenter 3 >> multiplication");
    printf("\nenter 4 >> division");
    printf("\nenter 5 >> modulas");
    printf("\nenter 0 >> exit");
    
    printf("\n enter your choice : ");
    scanf("%d", &choice);
    
    label :

    if(choice==0)
     goto label;
     else
    {
    printf("enter first number");
    scanf("%d", &n1);
    printf("enter second  number");
    scanf("%d", &n2);
    }
    
    
    switch (choice)
    {
    case 1:
        sum(n1, n2);
        break;
    case 2:
        sub(n1, n2);
        break;
    case 3:
        mul(n1, n2);
        break;
    case 4:
        div(n1, n2);
        break;
    case 5:
        mod(n1, n2);
        break;
    default:
        printf("invalid choice");
    }
    }
}
