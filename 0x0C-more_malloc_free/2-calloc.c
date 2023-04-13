#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a single byte
 * @s: memory space must be occupied
 * @b: char to be copied
 * @n: amount of times to duplicate b
 *
 * Return: a reference to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: array's number of elements
 * @size: each element's size
 *
 * Return:a reference to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
