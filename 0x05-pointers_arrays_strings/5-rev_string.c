#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
int i;
char tmp;
int lenght;

i = 0;
while (s[i])
i++;
lenght = i;
i = 0;
while (i < lenght)
{
lenght--;
tmp = s[i];
s[i] = s[lenght];
s[lenght] = tmp;
i++;
}
}
