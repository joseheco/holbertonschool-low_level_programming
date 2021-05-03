#include "lists.h"

/**
 * dlistint_len - List.
 * @h: Pointer
 * Return: Number
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
