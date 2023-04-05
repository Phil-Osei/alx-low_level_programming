#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input string
 * @needle: input substring
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
	return (haystack);
	}
	if (*haystack == '\0')
	{
		return ('\0');
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}
	if (*n == '\0')
	{
		return (haystack);
	}
	haystack++;
	}
		return ('\0');
}
