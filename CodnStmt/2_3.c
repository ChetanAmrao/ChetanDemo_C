// Accept two numbers from User and find out smaller and bigger number. Give proper messages. 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int no1, no2; //Two integers

	printf("Please Enter Two Numbers To Compare: \n");
	scanf("%d%d", &no1, &no2);
	printf("1st Number = %d & 2nd Number = %d\n", no1, no2);

	//using ternary operator
	no1 > no2 ? printf("1st is bigger number") : printf("2nd number is bigger");
}
