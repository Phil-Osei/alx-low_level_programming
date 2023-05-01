#include "main.h"
#include <stdlib.h>

/**
 *argstostr - main entry
 *
 *@ac: the argument cout
 *
 *@av: the argument vector
 *
 * Return: 0(succes)
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	str = malloc(sizeof(char) * (ch + ac + 1));
	i = 0;
	while (av[i])
	{
		while (av[i][j] != '\0')
		{
			str[len] = av[i][j];
			len++;
			j++;
		}

		str[len] = '\n';
		j = 0;
		len++;
		i++;
	}
	len++;
	str[len] = '\0';
	return (str);
}
