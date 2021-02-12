#include <stdio.h>

/**
 * main - print sum of the multiples
 *
 * Return: 0.
 */

int main(void)
{
int a, b;

b = 0;
for (a = 3; a < 1024; a++)
{
if (((a % 3) == 0) || ((a % 5) == 0))
{
b = b + a;
}
}
printf("%d\n", b);
return (0);
}
