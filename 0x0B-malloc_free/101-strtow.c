#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - split a string into wrds
 * @str: the stirng to be splited \/
 *
 * Return: pointer ot an ary of z stings, NULL on failure
 */

char **strtow(char *str)
{
	int i, words, j, k, len;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = strlen(str);
	words = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	}

	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0, k = 0; i < words; i++)
	{
		while (str[k] == ' ')
			k++;
		len = 0;
		for (j = k; str[j] && str[j] != ' '; j++)
			len++;

		arr[i] = malloc(sizeof(char) * (len + 1));
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < len; j++, k++)
			arr[i][j] = str[k];
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
