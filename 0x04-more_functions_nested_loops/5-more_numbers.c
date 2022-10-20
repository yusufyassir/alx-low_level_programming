#include "main.h"
/**
 * more_numbers - prints from 0-14
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	char n, c;

	while (i < 10)
	{
		for (n = 0; n <= 13; n++)
		{
			c = n;
			if (n > 0)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar(c);
		}
			_putchar('\n');
			i++;
	}
}
