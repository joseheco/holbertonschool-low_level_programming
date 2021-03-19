#include "lists.h"
#include <stdio.h>
/**
 * print_list - Print element of a singly linked.
 * @h: Pointer.
 * Return: Integer.
 */

size_t print_list(const list_t *h)
{
const list_t *temp;
int n;
temp = h;
for (n = 0; temp; n++)
{
if (temp->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", temp->len, temp->str);
temp = temp->next;
}
return (n);
}
