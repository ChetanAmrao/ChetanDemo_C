// Accept marks of 5 subjects and calculate total and average of the marks
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float sb1, sb2, sb3, sb4, sb5, tot, avg;

	printf("Please Enter Marks... \n");

	printf("Enter subject 1: ");
	scanf("%f", &sb1);

	printf("Enter subject 2: ");
	scanf("%f", &sb2);

	printf("Enter subject 3: ");
	scanf("%f", &sb3);

	printf("Enter subject 4: ");
	scanf("%f", &sb4);

	printf("Enter subject 5: ");
	scanf("%f", &sb5);

	tot = sb1 + sb2 + sb3 + sb4 + sb5;
	avg = tot / 5;
	printf("\nTotal is %.2f and Average Marks are %.2f", tot, avg);

}
