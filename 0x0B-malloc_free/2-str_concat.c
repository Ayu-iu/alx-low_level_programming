#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: second string
 *
 * Return: a ptr to the concated string or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;

	while (s1[len1] != '\0')
		len1++;
	len2 = 0;

	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j <= len2; j++)
		concat[i + j] = s1[i];
	return (concat);
}
