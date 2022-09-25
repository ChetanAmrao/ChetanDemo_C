// Accept two numbers from User and Swap the values and display to User

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int no1, no2; //Two integers

	printf("Please Enter Two Numbers To Swap: \n");
	scanf("%d%d", &no1, &no2);
	printf("Before Swap 1st Number = %d & 2nd Number = %d\n", no1, no2);

	no1 = no1 + no2;
	no2 = no1 - no2;
	no1 = no1 - no2; 

	printf("After Swap 1st Number = %d & 2nd Number = %d\n", no1, no2);
}
