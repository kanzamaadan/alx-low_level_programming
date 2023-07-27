#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the resulting string @str
 */
char *leet(char *str)
{
char *ptr = str;
char leet_table[] = "aAeEoOtTlL";
char leet_replacement[] = "4433007711";
int i;

while (*str)
{
for (i = 0; leet_table[i]; i++)
{
if (*str == leet_table[i])
{
*str = leet_replacement[i];
break;
}
}

str++;
}

return (ptr);
}
