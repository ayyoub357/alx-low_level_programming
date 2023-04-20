#include "function_pointers.h"

/**
 * int_index - If the comparison is true, return the index place; else, return -1.
 * @array: array
 * @size: the array's element size
 * @cmp: pointer to one of the three functions in main
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i< size)
			{
				if (cmp(array[i])) return (1);
					return (i);

				i++;
			}		
		}
	}
	return (-1);
}
