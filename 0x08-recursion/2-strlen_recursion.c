#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: input string to be printed.
 * Return: Length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0); /* base case : here the string ends*/
}
return (1 + _strlen_recursion(s + 1));
/*Count the current character and recurse */
}
