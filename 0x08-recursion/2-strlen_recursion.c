#include "main.h"
/**
 * _strlen_recursion - gives length of stirg
 * @s:string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len +=  _strlen_recursion(s + 1);
	}
	return (len);

}
