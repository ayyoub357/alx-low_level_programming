#include "lists.h"

/**
 * list_len - specifies the linked list's length
 * @h: a reference to the first node
 *
 * Return: the length of the list
 */
 
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
