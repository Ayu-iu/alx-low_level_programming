#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of charas and initializes wz specific char
 * @size: size of the array to create
 * @c: the char to initialize the array wz
 *
 * Return: a pointer, if it fails NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

