#include <stdio.h>

struct student
{
    int id;
    char name[20];
    int age;
    char course[20];
    char city[20];
    int std;
    char school[20];
};
int main()
{
    struct student s1[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter your id : ");
        scanf("%d", &s1[i].id);
        printf("enter your name : ");
        scanf("%s", &s1[i].name);
        printf("enter your age : ");
        scanf("%d", &s1[i].age);
        printf("enter your course : ");
        scanf("%s", &s1[i].course);
        printf("enter your city : ");
        scanf("%s", &s1[i].city);
        printf("enter your standard : ");
        scanf("%d", &s1[i].std);
        printf("enter your school : ");
        scanf("%s", &s1[i].school);
    }

    printf("\n\n\t---:STUDENTS DATA:---\n\n");

    printf("| ID\tNAME\tAGE\tCOURSE\tCITY\tSTD\tSCHOOL|\n");
    printf("| --\t----\t---\t------\t----\t---\t------|\n");

    for (int i = 0; i < 3; i++)
    {
        printf("|%d\t%s\t%d\t%s\t%s\t%d\t%s|\n", s1[i].id, s1[i].name, s1[i].age, s1[i].course, s1[i].city, s1[i].std, s1[i].school);
    }
}