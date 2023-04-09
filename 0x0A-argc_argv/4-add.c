#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 *main - program adds positive numbers
 *
 *@argc: Number of command line arguments
 *
 * @argv: Array name
 *
 * Return: Always 0 (Success)
 **
 */

int main(int argc, char *argv[])
{
	int i;

	int total = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{

		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	total += atoi(argv[i]);
	}
	printf("%d", total);
	return (0);
}
