#include "main.h"

/**
 * _strpbrk - Entry point to search a string the set of bytes
 * @s: string to be searched
 * @accept: string containing the characters to be matched
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
	p = accept;

	while (*p != '\0')
	{
	if (*s == *p)
	{
		return (s);
	}
	p++;
	}
	s++;
	}
	return ('\0');
}

