#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - function that allocates memory for an array using malloc
 *
 *@nmemb: number of elements to allocate
 *
 *@size: size of each element of byte
 *_memset: sets memory block to all zeros
 *
 *Return: return 0 if NULL, otherwise NULL when fails
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
		return (ptr);

}
