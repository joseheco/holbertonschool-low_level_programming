#include "holberton.h"

/**
 *_islower - define a character is lowercase.
	*@c: character inside libraty
	*
 * Return: - 1 if is a lowercase and 0 is not.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

