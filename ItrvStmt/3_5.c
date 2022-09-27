//accept start value and end value, print numbers 
//if start value bigger, print in descending
//if start value smaller, print in ascending

#include<stdio.h>
int main()
{
	int i, no1, no2;

	printf("Enter Your 1st Number: ");
	scanf_s("%d", &no1);

	printf("Enter Your 2nd Number: ");
	scanf_s("%d", &no2);

	if (no1 > no2) {
		for (i = no1; i >= no2; i--)
			printf("%d,", i);
	}
	else {
		for (i = no1; i <= no2; i++)
			printf("%d,", i);
	}
}