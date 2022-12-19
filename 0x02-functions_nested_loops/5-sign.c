#include"main.h"

/**
 * print_sign - print + if n is greater than zero,
 *            0 if n is zero and - if n is lessthan zero.
 *
 * @n: integer to be inserted
 *
 * Return: 1 if n greater than 0, -1 if n lessthan 0
 *         otherwise 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
