#include "holberton.h"

/**
 * _memset - fills memory
 * @s: string to fill
 * @b: value 
 * @n: numbers
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
