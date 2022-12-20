#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: input string
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;
	
	while (*(s + count) != '\0')
		count++;
	return (count);
}
