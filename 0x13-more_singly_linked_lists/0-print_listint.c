#include "lists.h"

/**
 * print_listint - a linked list's items are all printed
 * @h: to print a linked list of type listint_t
 *
 * Return: node count
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
