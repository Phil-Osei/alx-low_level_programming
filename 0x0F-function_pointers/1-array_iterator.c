#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - function that prints each array of elements
 *
 *@array: arrays
 *
 *@size: number of elements to print
 *
 *@action: pointer to print in hex or regular
 *
 * return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
