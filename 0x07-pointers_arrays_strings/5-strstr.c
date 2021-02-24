#include "holberton.h"

/**
 * _strstr - function
 * @haystack: array
 * @needle: array
 * Return: point
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0;
char *p;

if (needle[i] == '\0')
p = haystack;
while (haystack[i] && needle[j])
{
j = 0;
while (haystack[i + j] == needle[j] && needle[j])
j++;
if (needle[j] == '\0')
p = haystack + i;
else
p = 0;
i++;
}
return (p);
}
