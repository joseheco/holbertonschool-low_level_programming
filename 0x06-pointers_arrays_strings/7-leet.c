#include "holberton.h"

/**
 * leet - function
 * @s: pointer
 * Return: lowercase
 */

char *leet(char *s)
{
int lenght;
int i1;
int i2;
char vocales[5] = "aeotl";
char numeros[5] = "43071";

lenght = 5;
i1 = 0;
while (s[i1])
{
for (i2 = 0; i2 < lenght; i2++)
{
if (s[i1] == vocales[i2] || s[i1] == vocales[i2] - 32)
{
s[i1] = numeros[i2];
}
}
i1++;
}
return (s);
}
