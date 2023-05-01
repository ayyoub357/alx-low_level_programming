#include "lists.h"

/**
 * pop_listint - deletes the connected list's head node
 * @head: a reference to the first item in the linked list
 *
 * Return: the data included inside the components that were removed,
 * Alternatively, 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
