#include "main.h"
/**
 * largest_number - rturns the largest of 3 bumbers
 * @a: first unt
 * @b: secont int
 * @c: third int
 * Return: largest intger
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
