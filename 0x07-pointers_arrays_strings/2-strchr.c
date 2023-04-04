#include "main.h"

/**
 * _strchr - Entry point
 * @s: input pointer
 * @c: input character to search for
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	if (*s == c)
	{
	return (s);
	}
	return (0);
}
