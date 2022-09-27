//accept number and print its table

#include<stdio.h>
int main()
{
	int i, num;

	printf("Enter Your Number: ");
	scanf_s("%d", &num);

	printf("Your Table Is:\n");
	for (i = 0; i <= 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num*i );
	}
}