#include <stdio.h>
/**
 * main - prints numberz
 * Description: prints with putchar
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '1'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
