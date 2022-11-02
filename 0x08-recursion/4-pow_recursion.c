#include "main.h"
/**
 * _pow_recursion - givs power
 * @x: num
 * @y: pow
 * Return: power sum
 */
int _pow_recursion(int x, int y)
{
	int result = x;
	int i;

	if (y < 0)
		return (-1);

	else if (y == 1)
		return (1);

	else if (y == 0)
		return (1);

	else
	{
		for (i = y; i > 1; i--)
		result *= y;
	}

	return (result);
}
