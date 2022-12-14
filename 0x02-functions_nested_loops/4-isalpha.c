#include"main.h"

/**
 * _isalpha - Entry point
 *
 * checks if c is a letter in both upper and lowercase
 *
 * Return: 1 if c is a letter else 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'b' &&
			c >= 'A' && c <= 'B')
		return (1);
	return (0);
}
