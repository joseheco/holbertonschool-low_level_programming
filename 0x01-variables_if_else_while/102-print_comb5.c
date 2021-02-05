#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;
	int num, num1, num2, num3;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
		num = (x / 10);
		num1 = (x % 10);
		num2 = (y / 10);
		num3 = (y % 10);
		if ((num == num2 && num1 < num3) || num < num2)
		{
			putchar (num + '0');
			putchar (num1 + '0');
			putchar (' ');
			putchar (num2 + '0');
			putchar (num3 + '0');
			if (num != 9 || num1 != 8 || num2 != 9 || num3 !=9)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	}
	putchar ('\n');
	return (0);
}
