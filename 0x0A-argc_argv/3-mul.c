#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 **main - function that multiplies two numbers
 *
 * *@argc: number of arguments input
 *
 **@argv: array of arguments string
 *
 * Return: 1 if not enough arguments passed in, 0 otherwise
 *
 **/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 0 && argc != 3)
	{
		printf("Error\n");
			return (1);
			}
	else
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
			return (0);
	}
}
