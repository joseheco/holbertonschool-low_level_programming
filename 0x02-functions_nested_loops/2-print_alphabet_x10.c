#include "holberton.h"

/**
 * print_alphabet_x10 - print 10 times alphabet.
 *
 * Return void
 */
void print_alphabet_x10(void)
{
int letra;
int x;

for (x = 0; x < 10; x++)
{
for (letra = 'a'; letra <= 'z'; letra++)
{
_putchar(letra);
}
_putchar('\n');
}
}
