#include "holberton.h"

/**
 * print_line - imprime espacios.
 *
 * @n: numero de veces.
 */
void print_line(int n)
{
int a;

a = 0;
while (n > 0 && a < n)
{
_putchar(95);
a++;
}
_putchar('\n');
}
