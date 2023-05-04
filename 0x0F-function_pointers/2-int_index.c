#include "function_pointers.h"

/**
 *int_index - Entry point takes three argument
 *
 *@array: array being searched
 *
 *@size: size of elements in the arrays
 *
 * @cmp: pointer to the function of one of
 * the three in the main function
 *
 * Return: 0 success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
		return (i);
	}
		return (-1);


}
