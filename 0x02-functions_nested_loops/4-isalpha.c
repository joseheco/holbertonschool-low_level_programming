#include "holberton.h"

/**
*_isalpha - define a letter is lower or upper.
   *@c: character inside libraty
   *
* Return: - 1 is true and 0 is false
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

