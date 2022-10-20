#include "main.h"
/**
 * print_diagonal - prints aline
 * Return: void
 * @n: num of lines
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
