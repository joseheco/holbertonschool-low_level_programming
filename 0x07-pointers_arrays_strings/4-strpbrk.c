#include "holberton.h"

/**
 * _strpbrk - function that return
 * @s: string
 * @accept: string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
int j, i = 0;

while (s[i])
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (s + i);
}
i++;
}
return (0);
}
