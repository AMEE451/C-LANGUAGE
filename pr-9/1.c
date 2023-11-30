#include <stdio.h>
int main()
{
    char email[20];
    char password[20];

    FILE *fp;
    fp = fopen("email.txt", "a");

    printf("enter email");
    scanf("%s", &email);
    printf("enter password");
    scanf("%s", &password);

    printf("EMAIL : %s\n", email);
    printf("PASSWORD : %s", password);

    fprintf(fp, "EMAIL\t\n : %s", email);
    fprintf(fp, "PASSWORD\t : %s", password);

    
    return 0;
}
