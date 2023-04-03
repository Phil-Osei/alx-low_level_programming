#include "main.h"

/**
 * _memset - main function that fills a block of memory with a constant byte
 * @s: a pointer to the address of memory to be filled
 * @b: the constant byte
 * @n: number of bytes to be filled with a constant byte
 *
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
	*p++ = b;
	}
	return (s);
}
