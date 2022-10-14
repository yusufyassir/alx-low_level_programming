#include <stdio.h>
/**
 * main - print alphabitcs
 * Description: print all letters except q e
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	return (0);
}
