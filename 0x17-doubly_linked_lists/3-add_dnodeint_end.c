#include "lists.h"

/**
 * add_dnodeint_end - adds a new node.
 *
 * @head: pointer.
 * @n: element.
 *
 * Return: address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *new_node;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
	return (NULL);

new_node->next = NULL;

new_node->n = n;

if (*head == NULL)
{
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}

temp = *head;
while (temp->next)
	temp = temp->next;

new_node->prev = temp;
temp->next = new_node;
return (new_node);
}
