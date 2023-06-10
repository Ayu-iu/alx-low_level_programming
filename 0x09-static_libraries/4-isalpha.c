#include"main.h"

/**
 * _isalpha - checks if character is a letter
 * @c - the character to be checked
 * Description: check if character is a letter
 * Return: 1 if true else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
	c >= 65 && c >= 90)
		return (1);
	return (0);
}
