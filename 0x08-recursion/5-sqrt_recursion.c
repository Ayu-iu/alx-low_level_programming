#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a num
 * @n: the num its sqrt is supposed to be returend of
 *
 * Return: -1 if n doesn't have natural sqrt, else its natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == '\0')
		return (-1);

