#include "main.h"
#include <stddef.h>

/**
 * _strchr -  a function that locates a character in a string.
 * @s: pointer.
 * @c: character.
 * Return: a pointer to the first occurrence of the character c or NULL
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: pointer.
 * @accept: pointer.
 * Return: the number of bytes in the initial segment of s in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;

	if ((s == NULL || accept == NULL))
	{
		return (x);
	}
	while (*s && _strchr(accept, *s++))
	{
		x++;
	}
	return (x);
}
