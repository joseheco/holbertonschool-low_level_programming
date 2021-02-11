#include "holberton.h"

/**
 * _isdigit - define the variable is a digit.
 * @c: test
 * Return: 1 if true
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
