/*
accept number from user and find its factorial
*/
#include<stdio.h>
int main()
{
	int i = 1, f = 1, num;

	printf("Enter Your Number: ");
	scanf_s("%d", &num);

	while (i <= num)
	{
		f = f * i;
		i++;
	}

	printf("%d! = %d", num, f);
}

