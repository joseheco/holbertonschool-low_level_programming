#include "holberton.h"

/**
 *puntero - input puntero.
 * @n: number
 * @i: number
 * Return: 0
 */
int puntero(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (puntero(n, i + 1));
}

/**
 * _sqrt_recursion - search
 * @n: number
 * Return: square
 */
int _sqrt_recursion(int n)
{
	return (puntero(n, 1));
}
