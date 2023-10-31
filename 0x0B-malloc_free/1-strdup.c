#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: string to duplicate
 *
 * Return: Pointer to the duplicated string or NULL if str is NULL or
 * if memory allocation fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

