#include "holberton.h"

/**
 *print_most_numbers - print number but not 2 and 4.
 *
 */
void print_most_numbers(void)
{
int a;

for (a = 0; a < 10; a++)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
}
_putchar('\n');
}
