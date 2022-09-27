// Program to Accept a number and display on screen 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num; //number to accept from user through console
	printf("Please Enter A Number: ");
	scanf("%d", &num);
	printf("You Have Entered The Number: %d", num);
}