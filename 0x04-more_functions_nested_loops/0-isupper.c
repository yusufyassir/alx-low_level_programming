#include "main.h"
/**
 * _isupper - check for upper case letters
 * Return: 1 if upper
 * @c: passed letter
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
