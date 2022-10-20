#include "main.h"
/**
 * print_diagonal - prints aline
 * Return: void
 * @n: num of lines
 */
void print_diagonal(int n)
{
	int c = n - 1;

	while (n > 0)
	{
		while (c > 0)
		{
			_putchar(' ');
			c--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
