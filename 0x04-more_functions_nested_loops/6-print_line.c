#include "main.h"
/**
 * print_line - prints aline
 * Return: void
 * @n: num of lines
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
