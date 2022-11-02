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

	else if (y == 1 || y == 0)
		return (1);

	return (result);
}
