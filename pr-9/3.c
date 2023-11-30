#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    int che_marks, maths, phy;
    float per;
    
};
int main()
{
    struct student s1[5];
    float total,per,avg;
    for (int i = 0; i < 5; i++)
    {
    
        printf("enter your rollno : ");
        scanf("%d", &s1[i].rollno);
        printf("enter your name : ");
        scanf("%s", &s1[i].name);
        printf("enter your chemistry marks :");
        scanf("%d", &s1[i].che_marks);
        printf("enter your maths marks :");
        scanf("%d", &s1[i].maths);
        printf("enter your physics marks :");
        scanf("%d", &s1[i].phy);
    }

    for(int i=0;i<3;i++)
    {
        total=(s1[i].che_marks+s1[i].maths+s1[i].phy);

        s1[i].per=(total/300)*100;
    }
    

    printf("\n\n\t---:STUDENTS DATA:---\n\n");

    printf("| ROOLNO\tNAME\tCHEM_M\tMATHS-M\tPHY_M\tPER\n|");
    printf("| ------\t----\t------\t-------\t-----\t---\n|");
    for (int i = 0; i < 4; i++)
    {
        printf("|%d\t%s\t%d\t%d\t%d\t%.2f|\n", s1[i].rollno, s1[i].name, s1[i].che_marks, s1[i].maths, s1[i].phy,s1[i],s1[i].per);
    }
}