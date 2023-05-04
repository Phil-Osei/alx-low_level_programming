#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 **malloc_checked - Function that allocates memory using memory
 **
 **@b: Number that need to be allocated.
 **
 **Return: a pointer to the allocated file
 **
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
