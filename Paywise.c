/*
 * Divyanshu-Modi <divyan.m05@student.sfit.ac.in>
 * Date: 14-03-2023
 *
 * Paywise: A program to calculate gross salary of a employee
 */

#include "stdio.h"
#ifdef _WIN32
#include "conio.h"
#endif

//#define DEBUG

#define pr_info(args...) printf("Paywise: " args)
#ifdef DEBUG
#define pr_debug(args...) pr_info(args)
#else
#define pr_debug(args...)
#endif

void main(void)
{
	float base_sal = 0;
	float hra = 0;
	float ta = 0;
	float da = 0;
	float ret = 0;

#ifdef _WIN32
	getch();
#endif

	pr_info("Enter Salary amount: ");
	scanf("%f", &base_sal); // store the val to base_sal

	da = base_sal*.5;
	pr_debug("DA is %.3f\n", da);

	hra = base_sal*.3;
	pr_debug("HRA is %.3f\n", hra);

	ta = base_sal*.2;
	pr_debug("TA is %.3f\n", ta);

	ret = base_sal+hra+ta+da;
	pr_info("Gross Salary is %.3f\n", ret);
}
