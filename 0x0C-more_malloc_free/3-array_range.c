#include <stdlib.h>
#include "main.h"

/**
 * *array_range - generates an array of integers
 * @min: minimum value range saved
 * @max: maximum value range and number of entries saved
 *
 * Return: a reference to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
