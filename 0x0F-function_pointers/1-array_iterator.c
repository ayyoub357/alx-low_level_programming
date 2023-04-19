#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - each array element is printed on a new line
 * @array: array
 * @size: how many elements should be printed
 * @action: pointer to print in either ordinary or hexadecimal
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
