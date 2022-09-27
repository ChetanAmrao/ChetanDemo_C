//accept number from user and check if it is a prime number
#include<stdio.h>
int main()
{
    int num, count = 2, flag = 0;
	printf("Enter your number: ");
	scanf_s("%d", &num);
    while (count < num)
    {
        if (num % count == 0)
        {
            flag = 1;
            break;
        }
        count++;
    }
    if (!flag) printf("%d is prime number\n", num);
    else     printf("%d is not prime number\n", num);

}