#include <stdio.h>

/**
 * main - print 50 fibonacci numbers.
 *
 * Return: 0
 */
int main(void)
{
int d;                     
long int ab, bc, c;           

ab = 1;
bc = 2;
printf("1, ");
printf("2, ");
for (d = 0; d < 48; d++)
{
c = ab + bc;
ab = bc;
bc = c;
if (d != 47)
{
printf("%ld, ", c);
}
else
{
printf("%ld\n", c);
}
}
return (0);
}
