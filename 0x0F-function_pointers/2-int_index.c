#include "function_pointers.h"

/**
 * int_index - If the comparison is true, return the index place; else, return -1.
 * @array: array
 * @size: the array's element size
 * @cmp: pointer to one of the three functions in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
