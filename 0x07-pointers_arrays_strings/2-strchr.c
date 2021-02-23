#include "holberton.h"

/**
 * _strchr - find the char
 * @s: string
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
break;
i++;
}
if (s[i] == c)
return (s + i);
return (0);
}

