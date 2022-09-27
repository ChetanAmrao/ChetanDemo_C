/*
accept number from user and count number of digits
*/
#include<stdio.h>
int main()
{
	int i=0, num;

	printf("Enter Your Number: ");
	scanf_s("%d", &num);

	while (num != 0)
	{
		num = num / 10;
		i++;
	}

	printf("The number of digits: %d", i);
}

