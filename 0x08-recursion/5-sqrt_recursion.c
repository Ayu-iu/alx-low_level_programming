#include "main.h"
#include <math.h>

/**
 * _sqrt_helper - Helper function for computing the sqrt of a num
 * @n: the num its sqrt is supposed to be returend of
 * @low: The lowest possible square root of n
 * @high: The highest possible square root of n
 *
 * Return: -1 if n doesn't have natural sqrt, else its natural sqrt
 */

int _sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (low > high)
	{
		return (-1);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}

/** _sqrt_recursion(int n) - returns the natural sqrt of a num 
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
