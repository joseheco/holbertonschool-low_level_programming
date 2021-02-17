#include "holberton.h"

/**
 * _strlen - length string.
 * @s: array
 * Return: lenght
 */

int _strlen(char *s)
{
int a = 0;

for (a = 0; s[a]; a++)
a++;
return (a);
}

