#include<stdio.h>

/**
 *main - print comb4.
 *
 *Return: 0 (success)
 */

int main(void)
{
int num;
int num1;
int num2;

for (num = 0; num <= 9; num++)
{	
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
if (num < num1 && num1 < num2)
{
putchar (num + '0');
putchar (num1 + '0');
putchar (num2 + '0');
if (num != 7 || num1 !=8 || num2 !=9)
{
putchar (',');
putchar (' ');
}
}
}
}
}
putchar ('\n');
return (0);
}
