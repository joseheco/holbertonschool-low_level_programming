#include "holberton.h"

/**
 * _puts - prints string.
 * @str: print a string.
 * Return: void.
 */

void _puts(char *str)
{
int a;

for (a = 0; str[a]; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
