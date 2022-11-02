#include "main.h"
/**
 * factorial - getcs factorial
 * @n: number
 * Return: fact
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1 && n >= 0)
	{
		return (1);
	}
	result *= factorial(n - 1);

	return (result);
}
