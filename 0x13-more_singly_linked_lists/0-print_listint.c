#include "lists.h"

/**
 * listint_len - generates a linked list
 * @h: a reference to the first node
 *
 * Return: list length
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
