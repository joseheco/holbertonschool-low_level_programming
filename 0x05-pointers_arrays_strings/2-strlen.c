#include "holberton.h"

/**
 * _strlen - length string.
 * @s: array
 * Return: lenght
 */

int _strlen(char *s)
{
int a = 0;

while (s[a])
a++;
return (a);
}

