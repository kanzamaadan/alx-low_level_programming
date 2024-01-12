#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination buffer
 * @src: The source string to be copied
 * @n: The maximum number of bytes to be copied
 *
 * Return: A pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (ptr);
}
