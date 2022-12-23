#include "main.h"

/**
 * _strncat - links them strings
 * @dest: input value
 * @src: input value
 * @n: also input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[j] != '\0')
	{
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
