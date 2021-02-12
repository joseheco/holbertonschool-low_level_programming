#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
long int ab, bc, c, d;

d = 2;
ab = 1;
bc = 2;
while ((ab + bc) <= 4000000)
{
c = ab + bc;
ab = bc;
bc = c;
if ((c % 2) == 0)
{
d = d + c;
}
}
printf("%ld\n", d);
return (0);
}
