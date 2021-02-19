#include "holberton.h"

/**
 * _strlen - print alphabet
 *cap_string - function
 *@s: A pointer
 *Return: imput
 */

int _strlen(char *s)
{
int contador;

contador = 0;
while (s[contador] != '\0')
{
contador++;
}
return (contador);
}

/**
 * cap_string - function
 * @s: pointer
 * Return: input
 */


char *cap_string(char *s)
    {
    int length1;
    int length2;
    int i1;
    int i2;
    char w_sp[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

    length1 = _strlen(s);
    length2 = _strlen(w_sp);
    for (i1 = 0; i1 < length1; i1++)
    {
            for (i2 = 0; i2 < length2; i2++)
            {
                    if ((s[i1] == w_sp[i2] && (s[i1 + 1] >= 97 && s[i1 + 1] <= 122)))
                    {
                            s[i1 + 1] = s[i1 + 1] - 32;
                    }
                    else if (i1 == 0 && (s[i1] >= 97 && s[i1] <= 122))
                    {
                            s[i1] = s[i1] - 32;
                    }
            }
    }
    }
