// Program to Accept two numbers from User and print additin, subtraction, multiplication and divisino of numbers
// Display result with proper message

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float no1, no2, add, sub, mul, div; //Two integers

	printf("Please Enter Two Numbers: ");
	scanf("%f%f", &no1, &no2);

	add = no1 + no2;
	sub = no1 - no2;
	mul = no1 * no2; 
	div = no1 / no2; 

	printf("The result is:\n");
	printf("Addition: %.2f\n", add);
	printf("Subtraction: %.2f\n", sub);
	printf("Multition: %.2f\n", mul);
	printf("Division: %.2f\n", div);
}