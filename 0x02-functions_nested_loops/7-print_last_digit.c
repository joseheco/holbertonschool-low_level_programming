#include "holberton.h"

/**
 * print_last_digit - code generate last digit.
         *
 * @n: number to be use.
         * 
 * Return: last digit of number.
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = -n;
}
_putchar(n + '0');
return (n);
}
