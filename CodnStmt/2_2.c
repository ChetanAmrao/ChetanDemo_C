// Accept Number from User and check whether it is odd or even.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;

	printf("Please Enter Your Number to Check Odd or Even: ");
	scanf("%d", &num);
	if (num %2 == 0)
	{
		printf("The Number %d is Even", num);
	}
	else
	{
		printf("Your Number %d is Odd", num);
	}

}
