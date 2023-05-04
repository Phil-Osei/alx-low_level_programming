#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints all arguments it receives
 *
 * @argc: Number of arguments input
 *
 * @argv: Array of strings
 *
 * Return: Always 0 (succes)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
			}
	return (0);
}
