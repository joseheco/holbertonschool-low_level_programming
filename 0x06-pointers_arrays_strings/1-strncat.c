#include "holberton.h"

/**
 * _strncat - 2 strings
 * @dest: string
 * @src: string
 * @n: number
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int k = 0;

while (dest[i] != '\0')
i++;

while (src[k] != '\0' && n > k)
{
dest[i] = src[k];
k++;
i++;
}
if (n > 0)
{
dest[i] = '\0';
}
return (dest);
}
