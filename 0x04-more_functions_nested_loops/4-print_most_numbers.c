#include "main.h"
/**
 * print_most_numbers - prints number without 2-4
 * Return: void
 */
void print_most_numbers(void)
{
	char a = 0;

	while (a <= 0)
		if (a != '2' && a != '4')
		{
			_putchar(a = '0');
		}
	_putchar('\n');
}
