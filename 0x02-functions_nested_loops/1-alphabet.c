#include "main.h"
/**
*print_alphabet - Prints the alphabet in lowercase
*
*return: Always 0(success)
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
