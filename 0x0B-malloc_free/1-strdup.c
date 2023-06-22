#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space memory
 * @str: string to duplicate
 *
 * Return: pointer to the string on success, Null on failure
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int lgth, i;

	if (str == NULL)
		return (NULL);

	lgth = 0;
	while (str[lgth] != '\0')
		lgth++;

	dup = malloc(sizeof(char) * (lgth + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= lgth; i++)
		dup[i] = str[i];

	return (dup);
}


