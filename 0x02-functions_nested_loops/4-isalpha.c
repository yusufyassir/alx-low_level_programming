#include "main.h"
/**
 * _islower - check for lower case letters
 * @c: the value recived
 * Return:0
 */
int _isalpha(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
