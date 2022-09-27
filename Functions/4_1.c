// Accept 2 numbers from user, write function to add numbers, number should be accepted in main()
//sum should be displayed in the function

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void add(int, int);
int main()
{
	int a, b;

	printf("Enter your numbers: ");
	scanf("%d%d", &a, &b);
	add(a, b);
}


void add(int no1, int no2)
{
	printf("Addition is: %d", no1+no2);
}