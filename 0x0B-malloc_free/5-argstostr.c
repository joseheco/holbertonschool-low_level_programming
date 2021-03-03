#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr - concatinate strings. 
 *@ac: number.
 *@av: pointer.
 *Return: pointer.
 */

char *argstostr(int ac, char **av)

{

char *str;
int i, j, length = 0;

if (av == NULL || ac == 0)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
length++;

str = malloc(sizeof(char) * length + ac + 1);
if (str == NULL)
return (NULL);

length = 0;

for (i = 0; i < ac; i++)

{
for (j = 0; av[i][j]; j++)

{
str[length] = av[i][j];
length++;
}

str[length] = '\n';
length++;
}
str[length] = '\0';

return (str);
}
