#include <stdio.h>
#include "holberton.h"

/**
 * main - Longer int use to number 612852475143.
 *
 * Return: value 0.
 */

int main(void)
{
long int a, b;

a = 612852475143;

for (b = 2; b <= a; b++)
{
if (a % b == 0)
{
a = a / b;
b--;
}
}
printf("%li\n", b);
return (0);
}
