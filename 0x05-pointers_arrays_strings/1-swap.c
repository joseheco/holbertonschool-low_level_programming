#include "holberton.h"

/**
 * swap_int - swap value.
 *@a: first
 *@b: second
 */

void swap_int(int *a, int *b)
{
int c;

c = 0;
c = *a;
*a = *b;
*b = c;
}
