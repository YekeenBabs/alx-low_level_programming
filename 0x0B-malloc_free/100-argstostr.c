#include <stdlib.h>
#include "main.h"

/**
 * concatenate_arguments - Concatenate all the arguments.
 * @av: Array of arguments.
 *
 * Return: Pointer to a new string, or NULL if it fails.
 */
char *concatenate_arguments(char **av)
{
	int i, j, k, len;
	char *concatenated;

	len = 0;
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++; /* Add space for the space character */
	}

	concatenated = malloc(len * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	k = 0;
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}
		concatenated[k] = ' '; /* Add a space character */
		k++;
	}

	concatenated[k - 1] = '\0'; /* Null-terminate the final string */
	return (concatenated);
}

