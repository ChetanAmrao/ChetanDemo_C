/*
accept number and find sum of the digits of that number
*/
#include<stdio.h>
int main()
{
	int num, sum = 0;

	printf("Enter your number: ");
	scanf_s("%d", &num);

	while (num >0)
	{
		sum = sum + num % 10;
		num = num / 10;
	}

	printf("Sum of digits: %d\n", sum);
	
	while (sum > 0)
	{
		num = num + sum % 10;
		sum = sum / 10;
	}

	printf("Sum of digits till last number: %d\n", num);


}


