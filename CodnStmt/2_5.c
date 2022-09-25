// Accept character value from user and check whether accepted value is alphabet

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char a;

	printf("Enter character: ");
	scanf("%c", &a);

	if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
	{
		printf("Character is an Alphabet!");
	}
	else
	{
		printf("Character is not an Alphabet");
	}
}
