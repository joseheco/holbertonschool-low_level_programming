#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds node.t
 * @head: Address of the node.
 * @n: integer.
 * Return: Address new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
else
{
newnode->n = n;
newnode->next = *head;
*head = newnode;
}
return (newnode);
}
