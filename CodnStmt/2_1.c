// Accept Number from User and check whether it is positive, negative or zero. Give proper messages

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;

	printf("Please Enter Your Number to Check: ");
	scanf("%d", &num);
	if (num == 0)
	{
		printf("The Number is Zero!");
	}
	else
	{
		if (num > 0)
		{
			printf("Your Number %d is Positive! :-)", num);
		}
		else
		{
			printf("Your Number %d is Negative! :-)", num);
		}
	}

}
