#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - define if a number is positive, negative or is a zero .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
	printf("Last digit of %d is %d and greater than 5\n", n, l);
	}
	else if (r == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
