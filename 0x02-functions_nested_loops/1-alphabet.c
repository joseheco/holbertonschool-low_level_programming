#include "holberton.h"

/**
* print_alphabet - print a finish in z.
*
* Return: Always 0
*/
void print_alphabet(void)
{
int letra;

for (letra = 'a'; letra <= 'z'; letra++)
{
_putchar(letra);
}
_putchar('\n');
}
