#include"main.h"

/**
 * _isalpha - checks if character is a letter
 * @c - the character to be checked
 * Description - check if c (c,C) is a letter
 * Return: 1 if c is an alphabet else 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 &&
	c >= 97 && c <= 122)
		return (1);
	return (0);
}
