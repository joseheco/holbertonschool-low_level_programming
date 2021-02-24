#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum
 * @a: array
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
long int sum = 0, sizemub;

sizemub = size * size;
for (i = 0; i < sizemub; i += size + 1)
sum += a[i];

printf("%li, ", sum);
sum = 0;

for (i = size - 1; i <= sizemub - size + 1; i += size - 1)
sum += a[i];
printf("%li\n", sum);
}
