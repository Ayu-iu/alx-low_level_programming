#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: 1st string to concat
 * @s2: 2nd string to concat
 * @n: max num of bytes of s2 to concat
 *
 * Return: a pointer on success, NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0;
	unsigned int a;
	unsigned int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		concat[a] = s1[a];
	for (b = 0; b < n; b++)
		concat[a + b] = s2[b];
	concat[a + b] = '\0';
	return (concat);
}
