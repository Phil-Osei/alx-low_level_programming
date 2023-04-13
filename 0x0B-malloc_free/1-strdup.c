#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 ** _strdup - returns new string that is a dupicate
 ** @str: char
 ** Return: 0
 **/

char *_strdup(char *str)
{
	char *aa;
	int i, j;

	j = 0;

	if (str == NULL)
	{
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	i++;
	}
	i = 0;
	aa = malloc(sizeof(char) * (i + 1));
	if (aa == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
	aa[j] = str[j];
	}
	return (aa);
}
