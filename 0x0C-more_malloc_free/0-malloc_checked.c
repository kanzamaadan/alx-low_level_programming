#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory result to be allocated
 *
 * Return: pointer to the address of the memory result
 */
void *malloc_checked(unsigned int b)
{
void *result;

result = malloc(b);
if (result == NULL)
exit(98);
return (result);
}
