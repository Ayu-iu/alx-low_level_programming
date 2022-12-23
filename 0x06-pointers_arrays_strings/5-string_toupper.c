#include "main.h"

/**
 * string_toupper -changes all lowcase to upper
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int L;

	L = 0;
	while (n[L] != '\0')
	{
		if (n[L] >= 'a' && n[L] <= 'z')
			n[L] = n[L] - 32;
		L++;
	}
	return (n);
}
