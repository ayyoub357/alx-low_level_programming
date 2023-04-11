#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size and assign char c
 * Return: pointer to the array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	n = malloc(sizeof(char) * size);

	if (size == 0 || n == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		n[i] = c;

	return (n);
}
