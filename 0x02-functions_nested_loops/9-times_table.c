#include "holberton.h"

/**
 * times_table - Generate 9 times
 *
 * Return : void
 */

void times_table(void)
{
int n;
int m;

for (n = 0; n <= 9; n++)
{
for (m = 0; m <= 9; m++)
{
if (m != 0)
{
_putchar(',');
_putchar(' ');
if (m * n <= 9)
_putchar(' ');
}
if (m * n > 9)
_putchar (m * n / 10 + '0');
_putchar (m * n % 10 + '0');
}
_putchar('\n');
}
}
