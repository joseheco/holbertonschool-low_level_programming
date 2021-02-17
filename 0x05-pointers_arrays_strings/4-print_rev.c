#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - print reverse.
 * @s: print reverse.
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
