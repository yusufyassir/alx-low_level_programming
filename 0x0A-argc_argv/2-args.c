#include <stdio.h>
/**
 * main - prints all passed args
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argv; i++)
		printf("%s\n", argv[1]);

	return (0);
}
