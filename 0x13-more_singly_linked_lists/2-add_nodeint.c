#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a linked list
 * @head: a reference to the first node in the list
 * @n: data to be inserted into the new node
 *
 * Return: If the new node fails, it returns NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
