#include "main.h"

/**
 * _pow_recursion - returns value of certain num raised to the power of another certain num -\/-
 * @x: the num to be raised to
 * @y: the num that raises x a certian times
 *
 * Return: -1 if y is less than 0, else the solution
 */

int _pow_recursion(int x, int y)
{
	if ( y < 0)
		return (-1);
	if ( y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
