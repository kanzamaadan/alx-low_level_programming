#include "main.h"

/**
 * wildcmp - Compares 2 str1 considered identical,
 *            otherwise returns 0.
 * @s1: The first string to compare.
 * @s2: The second string to compare, can contain the special character '*'.
 *
 * Return: 1 if strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
else if (*(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0')
return (0);
else
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}

if (*s1 != *s2)
return (0);
if (*s1 == '\0' && *s2 == '\0')
return (1);

return (wildcmp(s1 + 1, s2 + 1));
}
