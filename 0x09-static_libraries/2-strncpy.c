#include "main.h"

/**
 * _strcpy - Copies a string from source to destination
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
char *dest_ptr = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (dest_ptr);
}
