#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - allocate
 *@size: size
 *@c: char.
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *tmp = malloc(sizeof(char) * size);
unsigned int i;
if (size == 0 || tmp == NULL)
return (NULL);
for (i = 0; i < size; i++)
tmp[i] = c;
return (tmp);
}
