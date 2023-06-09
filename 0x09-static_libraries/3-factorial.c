#include "main.h"

/**
 * factorial - calculates the factoial of a certain num
 * @n: the number a factoiral of is required of
 * Return: factorial of n or -1 if n is negative (error)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
