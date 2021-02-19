#include "holberton.h"
/**
 * cap_string - function
 * @s: pointer
 * Return: input
 */


char *cap_string(char *s)
{
int i = 1, j, k;
char b[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

if (s[0] > 96 && s[0] < 123)
s[0] -= 32;

while (s[i] !='\0')
{
if (s[i] > 96 && s[i] < 123)
{
j = 0;
k = 0;
while (k == 0 && j < 13)
{
if (s[i - 1] == b[j])
{
k = 1;
}
j++;
}
if (k == 1)
{
s[i] -= 32;
}
}
i++;
}
return (s);
}
