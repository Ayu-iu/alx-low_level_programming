#include <stdlib.h>
#include <string.h>

/**
 * get_filename - gets the file it was compiled from
 * Return: the file name
 */

char *get_filename(void)
{
	const char *file = __FILE__;
	size_t len = strlen(file);
	char *filename = malloc((len + 1) * sizeof(char));

	if (filename != NULL)
	{
		memcpy(filename, file, len);
		filename[len] = '\0';
	}

	return (filename);
}
