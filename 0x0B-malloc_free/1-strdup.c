#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 ** _strdup - returns new string that is a dupicate
 ** @str: string of characters
 ** Return: returns a pointer
 **/

char *_strdup(char *str)
{
	char *ptr;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
		i = 0;
	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	ptr[j] = str[j];

	return (ptr);
}
