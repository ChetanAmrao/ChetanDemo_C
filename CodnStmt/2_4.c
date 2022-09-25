// Accept three numbers and print smallest

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int no1, no2, no3; //Two integers

	printf("Please Enter Three Numbers To Find Smallest: \n");
	scanf("%d%d%d", &no1, &no2, &no3);
	printf("1st Number = %d, 2nd Number = %d and 3rd Number = %d\n", no1, no2, no3);

	//using ternary operator
	no1 < no2 ?
		(no1 < no3 ? printf("1st is smallest"): printf("3rd is smallest"))
		:(no2 < no3 ? printf("2nd number is smallest"): printf("3rd number is smallest"));
}
