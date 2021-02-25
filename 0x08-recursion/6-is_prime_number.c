#include "holberton.h"

/**
 * prime_go - Checks
 * @n: number
 * @factor: number
 * Return: prime number
 */
int prime_go(int n, int i)
{
if (n == i)
return (1);
else if (n % i == 0)
return (0);
return (prime_go(n, i  + 1));
}
/**
 * is_prime_number - function principal
 * @n: number
 * Return: prime
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_go(n, 2));
}
