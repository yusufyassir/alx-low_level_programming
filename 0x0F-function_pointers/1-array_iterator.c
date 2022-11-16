#include "function_pointer.h"
/**
 * array_iterator - our func
 * @size: array size
 * @array: array
 * @action;
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (sizee-- > 0)
	{
		action(*array);
		array++;
	}
}
