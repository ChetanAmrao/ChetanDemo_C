/*
accept number and index from user and find out power of that number
*/
#include<stdio.h>
int main()
{
	int index, num, result=1;

	printf("Enter your number: ");
	scanf_s("%d", &num);
	printf("Enter your index: ");
	scanf_s("%d", &index);
	for (int i = 1; i <=index; i++)
	{
		result = num * result;
	}

	printf("Your result is: %d", result);
}


