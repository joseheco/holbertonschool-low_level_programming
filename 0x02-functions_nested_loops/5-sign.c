#include "holberton.h"

/**
 * print_sign - if a # is + or - or is 0.
 * @n: evaluate
 * Return: 1 if n >0 ..
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
