#include "lists.h"

/**
 * add_nodeint_end - a node is added to the end of a linked list
 * @head: a reference to the first item in the list
 * @n: data to be added to the new element
 *
 * Return: If the new node fails, it returns NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
