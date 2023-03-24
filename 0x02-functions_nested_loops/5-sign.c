#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 *@n: parameter to be printed
 *
 * Return: 1, 0, -1 if it alphabet and 0 otherwise
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{	_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}