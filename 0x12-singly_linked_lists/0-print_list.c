#include "lists.h"

/**
 * _strlen - returns a string's length
 * @s: the string whose length should be checked
 *
 * Return: string length in integers
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - a connected list is printed
 * @h: pointer to the first node
 *
 * Return: list length
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
