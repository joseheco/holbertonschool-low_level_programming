#include "holberton.h"

/**
 * _strlen - returns lenght
 * @s: array
 * Return: length
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;
return (i);
}

/**
 * puts_half - print string
 * @str: array
 * Return: void
 */

void puts_half(char *str)
{
int length;
int i;
int b;

length = _strlen(str);

b = ((length - 1) / 2) + 1;

for (i = b; i < length; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
