#include "main.h"
#include <stdlib.h>

/** 
 * strtow - split a string into words
 * @str; the string to be splited \ /
 *
 * Return : pointer --> to an arro of z strings, NULL on failure :/
 */

char **strtow(char *str)
{
	int i;
	int j;
	int k;
	int lgth;
	int words;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	lgth = strlgth(str);
	words = 0;

	for (i = 0; i < lgth; i++)
	{
		while (str[k] == ' ')
			k++;
		lgth = 0;
		for (j = k; str[j] && str[j] != ' '; j++)
			lgth++;
		arr[i] = malloc(sizeof(char) * (len + 1));

		if (arr[i] == NULL)
		{
			for (i--; i >=0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < lgth; j++, k++)
			arr[i][j] = str[k];

		arr[i][j] = '\0';
	}
	arr[i] = NULL;

	return (arr);
}
