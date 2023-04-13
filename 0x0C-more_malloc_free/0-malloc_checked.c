#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - malloc is used to allocate memory.
 * @b: the number of bytes to be allocated
 *
 * Return: a reference to the allotted memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
