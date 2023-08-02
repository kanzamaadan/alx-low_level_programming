#include "main.h"

/**
 * wildcmp - Compares 2 strings & returns 1 if considered identical.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1, s2 + 1))
return (1);
return (wildcmp(s1 + 1, s2));
}

if (*s1 != *s2)
return (0);

if (*s1 == '\0')
return (1);

return (wildcmp(s1 + 1, s2 + 1));
}
