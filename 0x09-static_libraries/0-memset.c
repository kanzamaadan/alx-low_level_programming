#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The pointer to the memory area.
 * @b: The constant byte.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *s_start = s;
while (n > 0)
{
*s = b;
s++;
n--;
}
return (s_start);
}
