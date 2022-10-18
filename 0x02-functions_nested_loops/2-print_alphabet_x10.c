#include "main.h"
/**
 * print_alphabet_x10 - prints all lowercase letters ten times
 * Description: prints alphabet
 * Return:0
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	int num = 0;

	while (num < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		num++;
	}
}
