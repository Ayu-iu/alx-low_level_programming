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
