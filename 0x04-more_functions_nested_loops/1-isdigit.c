#include "main.h"
/**
 * _isdigit - checks if num is a digt
 * @c: passed num
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
	{
		return (1);
	}
	return (0);
}
