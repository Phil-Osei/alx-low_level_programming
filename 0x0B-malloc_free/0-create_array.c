#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates an array of size and and assign char c
 *
 *@size: number of characters to allocate
 *
 *@c: character to initialize each element with
 *
 *malloc - Allocates size bytes of memory
 *
 * Return: pointer to an array, return NULL if fail
 **/

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
		return (str);

}

