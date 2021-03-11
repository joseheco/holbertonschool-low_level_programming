#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print array.
 * @array: Array address.
 * @size: Array size.
 * @action: Name function_pointers.
 *
 * Return: Nothing.
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array && action)
{
for (; i < size; i++)
action(array[i]);
}
}
