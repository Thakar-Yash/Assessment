// Create a Food billing system

#include<stdio.h>
#include<string.h>
main()
{
	int price, Amount=0, total_Amount=0, quantity, choice;
	char ch;
	
	do
	{
		printf("-----------------------Menu-------------------");
		printf("\n 1.Pizza \t Price = 180rs/pcs");
		printf("\n 2.Burger\t Price = 100rs/pcs");
		printf("\n 3.Dosa  \t Price = 120rs/pcs");
		printf("\n 4.Idli  \t Price = 50rs/pcs");
		
		printf("\n Please Enter Your Choice..... : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1 : printf("\n You have selected Pizza.");
					 printf("\n Enter the Quantity : ");
					 scanf("%d",&quantity);
					 Amount = quantity * 180;
					 break;
					 
			case 2 : printf("\n You have selected Burger.");
					 printf("\n Enter the Quantity : ");
					 scanf("%d",&quantity);
					 Amount = quantity * 100;
					 break;
					 
			case 3 : printf("\n You have selected Dosa.");
					 printf("\n Enter the Quantity : ");
					 scanf("%d",&quantity);
					 Amount = quantity * 120;
					 break;
					 
			case 4 : printf("\n You have selected Idli.");
					 printf("\n Enter the Quantity : ");
					 scanf("%d",&quantity);
					 Amount = quantity * 50;
					 break;
					 
			default : printf("Inavalid Choice.........");
					  break;
		}
		total_Amount += Amount;
		printf("\n Amount : %d",Amount);
		printf("\n Total Amount : %d",total_Amount);
		
		printf("\n Do You Want Place More Orders ? y & n :");
		scanf(" %c",&ch);
	}while(ch=='y');
}
