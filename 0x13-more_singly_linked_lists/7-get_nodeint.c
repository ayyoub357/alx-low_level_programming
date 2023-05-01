#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the linked list node at a certain index
 * @head: the first link in the linked list
 * @index: the node index to return
 *
 * Return: NULL or a reference to the node we're looking for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
