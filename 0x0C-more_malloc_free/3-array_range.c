#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - array.
 * @min: number.
 * @max: number.
 * Return: pointer.
 **/

int *array_range(int min, int max)
{

int i, abc, ab;
int *b;

if (min > max)
return (NULL);

abc = max - min + 1;
b = malloc(sizeof(int) * abc);

if (b == NULL)
return (NULL);
ab = min;

for (i = 0; i < abc; i++)
{
b[i] = ab;
ab++;
}
return (b);
}
