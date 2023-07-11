#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a ptr to a newly allocated space mem
 * @str: string to duplicate
 *
 * Return: ptr to the string on success, NULL on failure
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
