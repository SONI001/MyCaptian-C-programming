#include<stdio.h>
int main()
{
	int n;
	printf("\n ENTER ANY NUMBER BETWEEN 1 TO 5 TO SHOWCASE FOOD ITEM : ");
	scanf("%d",&n);
	printf("\n -------------------------------\n");
	switch(n)
	 {
	 	case 1:
	 		printf("\n Number you entered points to following food item :- \n");
	 		printf("\n Food Item - PAV BHAJI");
	 		printf("\n Price - Rs. 120");
	 		break;
	 	
		case 2:
	 		printf("\n Number you entered points to following food item :- \n");
	 		printf("\n Food Item - PIZZA");
	 		printf("\n Price - Rs. 240");
	 		break;
			 
		case 3:
	 		printf("\n Number you entered points to following food item :- \n");
	 		printf("\n Food Item - SANDWICH");
	 		printf("\n Price - Rs. 70");
	 		break;
			 
		case 4:
	 		printf("\n Number you entered points to following food item :- \n");
	 		printf("\n Food Item - MANCHURIAN");
	 		printf("\n Price - Rs. 100");
	 		break;
			 
		case 5:
	 		printf("\n Number you entered points to following food item :- \n");
	 		printf("\n Food Item - BHEL");
	 		printf("\n Price - Rs. 50");
	 		break;
			 
		default:
		    printf("\n INVALID ENTRY \n"); 		
	 }
	printf("\n-------------------------------"); 
    printf("\n THANK - YOU FOR VISITING"); 
}
