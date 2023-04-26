#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - concates two strings
 *
 *@s1: first string to concanate
 *
 *@s2: second string to concanate
 *
 *Return: returns 0
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, ci = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[ci])
		ci++;

	l = i + ci;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	ci = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[ci];
			ci++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
