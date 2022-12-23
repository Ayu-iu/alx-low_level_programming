#include "main.h"

/**
 * reverse_array - reverses array of the integers
 * @a: the array
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
