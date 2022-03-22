//c program to display the menu of food item using switch case
#include<stdio.h>
main()
{
	//Display the menu of food items
	printf("TODAY'S MENU\n");
	printf("\n1. FRENCH FRIES \n2. COOKIES \n3. COKE \n4. PASTA \n5. ICE CREAM \n6. SANDWICH \n7. NOODLES \n8. BURGER \n9. PIZZA");
	
	//Read the input
	int choice;
	printf("\nENTER YOUR CHOICE TO SEE THE PRICE OF THAT FOOD ITEM: ");
	scanf("%d",&choice);
	
	//switch case
	switch(choice)
	{
		case 1:
			printf("Food item - French Fries\nPrice - Rs.75");
			break;
		case 2:
			printf("Food item - Cookies\nPrice - Rs.90");
			break;
		case 3:
			printf("Food item - Coke\nPrice - Rs.20");
			break;
		case 4:
			printf("Food item - Pasta\nPrice - Rs.55");
			break;
		case 5:
			printf("Food item - Ice Cream\nPrice - Rs.30");
			break;
		case 6:
			printf("Food item - Sandwich\nPrice - Rs.35");
			break;
		case 7:
			printf("Food item - Noodles\nPrice - Rs.40");
			break;
		case 8:
			printf("Food item - Burger\nPrice - Rs.45");
			break;
		case 9:
			printf("Food item - Pizza\nPrice - Rs.120");
			break;
		default:
			printf("INVALID CHOICE");
			break;
	}
	return 0;
}
