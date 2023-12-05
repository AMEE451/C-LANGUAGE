#include<stdio.h>
int main()
{
    int a,cno,pno,qty;
    char name[10],pname[20];
    float price;

    printf("enter your name : ");
    scanf("%s",&name);
    printf("enter your contact no : ");
    scanf("%d",&cno);
    printf("enter your product no : ");
    scanf("%d",&pno);
    printf("enter your product name: ");
    scanf("%s",&pname);
    printf("enter your quantity : ");
    scanf("%d",&qty);
    printf("enter your price : ");
    scanf("%f",&price);


    FILE *fp;
    fp=fopen("bill.txt","w");

    fprintf(fp,"billing pf product",name,cno,pno,pname,qty,price);

    fclose(fp);

    
    return 0;
}
