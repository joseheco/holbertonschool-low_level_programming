#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Calls another function.
 * @name: String.
 * @f: Function.
 **/

void print_name(char *name, void (*f)(char *))
{
if (f && name)
f(name);
}


