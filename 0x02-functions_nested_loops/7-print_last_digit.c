#include "main.h"
/**
 * print_last_digit - prints last digit
 * Return: int
 * @n: passed number
 */
int print_last_digit(int n)
{
	int last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last);
	return (last);
}
