#include <stdio.h>
/**
 * main - print in reverse
 * Descriptio: prints letters in revers
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
