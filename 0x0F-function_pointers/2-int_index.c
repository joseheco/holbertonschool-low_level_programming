#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Compare a value.
 * @array: Array integer.
 * @size: size.
 * @cmp: Name function_pointers.
 *
 * Return: integer.
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && cmp && size > 0)
{
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
return (-1);
}
