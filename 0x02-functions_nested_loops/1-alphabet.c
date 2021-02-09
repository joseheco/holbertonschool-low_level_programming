#include "holberton.h"

/**
* main -print the alphabet.
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
