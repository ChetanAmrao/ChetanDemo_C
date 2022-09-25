// Accept Principle Amount, Rate of Interest and number of Years from User and find the S.I.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int Amt, RoI, Yr, SI; //Three integers 

	printf("Please Enter Details... \n");

	printf("Enter Amount: ");
	scanf("%d", &Amt); 

	printf("Enter Rate of Interest: ");
	scanf("%d", &RoI);

	printf("Enter Year: ");
	scanf("%d", &Yr);

	SI = (Amt * RoI * Yr) / 100;

	printf("Simple Interest is: %d", SI);

}
