#include <stdio.h>
#include "holberton.h"

/**
 * main - print 50 fibonacci numbers.
 *
 * Return: 0
 */

int main(void)
{
long int ab, bc, c;      
int d;

ab = 1;
bc = 2;
printf("1, ");
printf("2, ");
for (d = 0; d < 48; d++)
{
c = ab + bc;
ab = bc;
bc = c;
if (d != 47)
{
printf("%ld, ", c);
}
else
{
printf("%ld\n", c);
}
}
return (0);
}
