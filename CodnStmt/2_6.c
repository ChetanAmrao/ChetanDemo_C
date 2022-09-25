/*
Accept basic salary and total sales from user and calculate commission and net salary,
commission calculated on sales done:
net salary = basic salary + commission

if Total Sales is 5000 to 7000 commission is 3%
if Total Sales is 7001 to 10000 com'n is 5%
if Total Sales is 10,001 to 15,000 com'n is 10%
if Total Sales is above 15,001 com'n is 15%

Your program should print Basic Salary, Com'n and Net Salary
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float bs_slry = 0, t_sale = 0, cmsn = 0.3, nt_slry = 0;

	printf("Enter basic salary: ");
	scanf("%f", &bs_slry);

	printf("Enter total sales: ");
	scanf("%f", &t_sale);
	if (t_sale >= 5000 && t_sale <= 10000)
	{
		cmsn = 0.03;
	}
	else
	{
		if (t_sale >= 7001 && t_sale <= 7000)
		{
			cmsn = 0.05;
		}
		else
		{
			if (t_sale >= 10001 && t_sale <= 15000)
			{
				cmsn = 0.1;

			}
			else
			{
				if (t_sale > 15001)
				{
					cmsn = 0.15;

				}
			}
		}
	}
	cmsn = t_sale * cmsn;
	nt_slry = bs_slry + (cmsn);
	printf("Your Basic Salary = %.3f\nCommission = %.3f\nNet Salary = %.3f\n", bs_slry, cmsn, nt_slry);



}
