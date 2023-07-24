#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;

while (*s)
{
if (*s == '-')
sign *= -1;

if (*s >= '0' && *s <= '9')
{
digit = *s - '0';

if (sign == 1)
result = result * 10 + digit;
else
result = result * 10 - digit;
}

if (*s == ';')
break;

s++;
}
return (result);
}
