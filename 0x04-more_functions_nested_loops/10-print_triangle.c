#include "holberton.h"

/**
 *print_triangle - print a triangle.
 *@size: size.
 *Return: void.
 */
void print_triangle(int size)
{
int a;
int b;
int z;

if (size <= 0)
_putchar('\n');
else
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size - a; b++)
_putchar(' ');
for (z = 1; z <= a; z++)
_putchar('#');
_putchar('\n');
}
}
