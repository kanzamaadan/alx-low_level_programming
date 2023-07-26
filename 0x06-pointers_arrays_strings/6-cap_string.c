#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: A pointer to the resulting string @str
 */
char *cap_string(char *str)
{
int i = 0;


if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;

while (str[i] != '\0')
{

if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
else
{
i++;
}
}

return str;
}
