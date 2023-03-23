#include "main.h"
/**
 *_isalpha - function that checks for alphabets
 *
 *@c: parameter to be printed
 *
 * Return: 1 if it alphabet and 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 95))
		return (1);
	else
		return (0);
}
