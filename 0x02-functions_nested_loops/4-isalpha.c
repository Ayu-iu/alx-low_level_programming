#include "main.h"

/**
 * _isalpha - checks if character is a letter
 * @c: the character to be checked
 *
 * Return: 1 if true else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
