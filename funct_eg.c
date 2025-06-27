#include <stdio.h>
#include "rectangle.h"


int main()
{
	int l,b;
	char opt;
	char choice;
	//choice = 'y';
	do
	{
		//system('cls');
		printf("Enter Length :");
		scanf("%d",&l);
		printf("Enter Breadth :");
		scanf("%d",&b);
		getchar();
		printf("Enter choice : ");
		opt = getchar();
	
		switch(opt)
		{
			case 'A':
				printf("Area = %d",area(l,b));
				break;
			case 'P':
				printf("Perimeter = %d",perimeter(l,b));
				break;
			default:
				printf("Invalid Option");	
				break;
		}
		getchar();
		printf("\n\n");
		printf("Do you want to cont...(y/n) : ");
		choice = getchar();
	}
	while(choice == 'y');
}
