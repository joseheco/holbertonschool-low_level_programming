#include "lists.h"

/**
 * list_len - Calculate the number
 * @h: Pointer
 * Return: Integer
 **/

size_t list_len(const list_t *h)
{
const list_t *temp;
size_t a = 0;
temp = h;
for (a = 0; temp; a++)
temp = temp->next;
return (a);
}
