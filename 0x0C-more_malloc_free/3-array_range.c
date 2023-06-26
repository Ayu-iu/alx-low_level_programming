#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of ints
 * @min: min value of array
 * @max: max value of array
 *
 * Return: a pointer to the created array
 *         if min > max, NULL
 *         if malloc fails, also NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int z;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		arr[z] = min++;

	return (arr);
}

