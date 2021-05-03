#include "lists.h"

/**
 * get_dnodeint_at_index - returns.
 * @head: pointer.
 * @index: is the index of the node.
 * Return: the node at the index position.
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
