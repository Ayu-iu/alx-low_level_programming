#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocs a memblock using malloc and free
 * @ptr: pointer to the previous mem allocated with malloc
 * @old_size: size of the space for ptr in byts
 * @new_size: new size of the new memblock in byts
 *
 * Return: pointer to newly allocated memory block
 *         if the new_size == old_size, return just ptr
 *         if ptr is NULL, call equivalent to the new size
 *         if new_size is equal to zero, calle equiv to free(ptr)
 *         and retrun NULL
 *         NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int a;
	unsigned int size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	size = old_size < new_size ? old_size : new_size;
	for (a = 0; a < size; a++)
		((char *)new_ptr)[a] = ((char *)ptr)[a];
	free(ptr);
	
	return (new_ptr);
}
