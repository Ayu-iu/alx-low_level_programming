#include "main.h"
#include <stdlib.h>

/**
 * argstostr - helps concatenate all arg of the program
 * @ac: the num of arg
 * @av: the array of args
 *
 * Return: a ptr to the concated string, NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j, k = 0, lgth = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			lgth++;
		lgth++;
	}
	str = malloc(sizeof(char) * (lgth + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
