#include "main.h"

/**
 * _isalpha - checks if character is a letter
 * @c: the character to be checked
 * Description: check if character is a letter
 * Return: 1 if true else 0
 */

int _isalpha(int c)
{
<<<<<<< HEAD
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	else
	return (0);
=======
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
		return (1);
	else
	{
		return (0);
	}
>>>>>>> 256d268b4d05f2d40282506ceceb36387cb7344f
}
