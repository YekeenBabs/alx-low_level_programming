#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of a specific size and assign a character
 * @size: size of the array
 * @c: the character to assign
 *
 * Description: Create an array of size 'size' and
 * initialize it with the character 'c'
 *
 * Return: a pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

