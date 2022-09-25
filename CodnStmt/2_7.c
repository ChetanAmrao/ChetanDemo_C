// menu with square, rectangle, circle options
// user enters choice and gives input for side/radius etc
// output area of the choosen option on the menu

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int choice, side;
	float  len=0.0, brd=0.0, rad=0.0;

	printf("    MAIN MENU \n");
	printf("=================\n");
	printf("  1:: Square\n");
	printf("  2:: Rectangle\n");
	printf("  3:: Circle\n");
	printf("----------------\n");
	printf("Enter Your Choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("Enter Side of Square: ");
		scanf("%d", &side);
		printf("The Area is %d", side * side);
		break;
	case 2:
		printf("Enter Length: ");
		scanf("%f", &len);
		printf("Enter Breadth: ");
		scanf("%f", &brd);
		printf("Area of Rectangle is: %.3f", len * brd);
		break;
	case 3:
		printf("Enter Radius: ");
		scanf("%f", &rad);
		printf("Area of Circle is: %.3f", 3.141593 * rad * rad);
		break;
	default:
		printf("Invalid Choice, try again after 2 minutes");
		break;
	}

}
