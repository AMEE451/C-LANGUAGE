#include<stdio.h>

int main()
{
	int c;
	printf("1) english \n ");
	printf("2) hindi \n");
	printf("3) gujarati \n");
	printf("Enter your choice :");
	scanf("%d",&c);
	switch (c)
	{
		case 1 :
			printf("press 1 for internet recharge \n");
			printf("press 2 for top-up   recharge \n");
			printf("press 3 for special   recharge \n");
			printf("Enter your choice :");
			scanf("%d",&c);
			switch(c)
			{
		     	case 1:
					printf("you have successfully done internet recharge \n");
					break;
				case 2:
					printf("you have successfully done top-up recharage\n");
					break;	
				case 3:
					printf("you have successfully done special recharage \n");
					break;
		   }
		   
		case 2 :
			printf("internet recharge ke liye 1 dabaiye \n");
			printf("top-up   recharge ke liye 2 dabaiye \n");
			printf("special  recharge ke liye 3 dabaiye \n");
			printf("Enter your choice :");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("Aapne safaltapurvak internet recharge kar liya he \n");
					break;
				case 2:
					printf(" Aapne safaltapurvak top-up recharage kar liya he\n");
					break;	
				case 3:
					printf("Aapne safaltapurvak special recharage kar liya he \n");
					break;	
			}
	
	case 3 :
			printf("internet recharge mate 1 dabavo \n");
			printf("top-up   recharge mate 2 dabavo \n");
			printf("special  recharge mate 3 dabvo \n");
			printf("Enter your choice :");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("tame safaltapurvak internet recharge karyu  chhe \n");
					break;
				case 2:
					printf(" tame safaltapurvak top-up recharage karyu  chhe\n");
					break;	
				case 3:
					printf("tame safaltapurvak special recharage karyu chhe \n");
					break;
				default :
				    printf("invalid");	
			        break;
		   }
    }
}
