#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination.
 * @src: source.
 * @n: size.
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
