#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Calculate the number.
 * @h: pointer to a list.
 * Return: integer.
 */

size_t listint_len(const listint_t *h)
{
size_t counter = 0;
while (h != 0)
{
h = h->next;
counter++;
}
return (counter);
}
