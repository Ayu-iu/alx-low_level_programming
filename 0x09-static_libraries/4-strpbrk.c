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
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer.
 * @accept: pointer.
 * Return: a pointer to the byte in s that matches one of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL || accept == NULL))
		return (NULL);
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}

