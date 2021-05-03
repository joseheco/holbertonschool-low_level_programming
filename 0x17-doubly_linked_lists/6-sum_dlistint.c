#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: pointer.
 * @index: index.
 * Return: node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while ((counter < index) && head)
	{
		head = head->next;
		counter++;
	}
	if (counter < index)
		return (NULL);
	return (head);
}
