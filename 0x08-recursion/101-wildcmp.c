#include"main.h"

/**
 * wildcmp - Compares two strings with a special character '*'.
 * @s1: 1st string.
 * @s2: 2nd string that can contain '*'.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0 .
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
{
return (*s1 == '\0');
/* If s2 is empty, s1 must also be empty for them to be identical.*/
}

if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
/* '*' can represent an empty string or any sequence of characters.*/
}

if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
/*Characters match, continue checking the rest of the strings.*/
}

return (0);  /* Characters do not match.*/
}
