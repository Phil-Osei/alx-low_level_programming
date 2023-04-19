#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - functions that prints name
 *
 *@name: string to add
 *
 *@f: pointer to function
 *
 *Return: nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	    f(name);
}
