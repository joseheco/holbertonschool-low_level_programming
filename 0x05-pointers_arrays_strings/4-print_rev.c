#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print array.
 * @a: array
 * @n: array
 */

void print_rev(char *s)
{
int a = 0;
int b;

for (b = 0; s[b]; b++)
{
}
for (a = b - 1; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
