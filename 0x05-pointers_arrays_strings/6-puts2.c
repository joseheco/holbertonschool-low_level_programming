#include "holberton.h"

/**
 * puts2 - print others char.
 * @str: string/
 */

void puts2(char *str)
{
int a = 0;

while (str[a])
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
a++;
}
_putchar('\n');
}
