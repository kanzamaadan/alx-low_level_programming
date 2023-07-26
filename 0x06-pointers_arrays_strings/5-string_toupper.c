#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Return: A pointer to the resulting string @str
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*str)
{
if (*str >= 'a' && *str <= 'z')
*str -= 32;

str++;
}

return (ptr);
}
